#!/bin/bash
set -e
if [ "$TRAVIS_OS_NAME" = "linux" ]; then
    echo updating site...

    rm -rf gh-pages
    git clone https://github.com/ianmaclarty/amulet.git --branch gh-pages --single-branch gh-pages
    rm -rf gh-pages/.git

    if [[ "$TRAVIS_TAG" == *-distro-trigger ]]; then
        TAG=${TRAVIS_TAG%-distro-trigger}
        echo copying ${TAG} docs...
        mkdir -p gh-pages/doc
        cp doc/index.html gh-pages/doc/
        cp doc/*.png gh-pages/doc/
        cp doc/style.css gh-pages/doc/
        cp -r doc/sounds gh-pages/doc/
        cp -r doc/images gh-pages/doc/
        mkdir -p gh-pages/doc/graphs
        cp doc/graphs/*.png gh-pages/doc/graphs/
        echo copying ${TAG} web player...
        cp -r amulet-${TAG}/builds/html/lua51/release/bin/* gh-pages/
    fi

    cp -r site/* gh-pages/
    
    echo pushing to gh-pages...
    cd gh-pages
    git init
    git config user.name "Ian MacLarty"
    git config user.email "ian@ianmaclarty.com"
    git add .
    git commit -m 'deploy site'
    git push --force --quiet "https://${GITHUB_TOKEN}@github.com/ianmaclarty/amulet.git" master:gh-pages > /dev/null 2>&1
    echo done
fi
