DIR C:\emscripten
call "%VS140COMNTOOLS%vsvars32.bat"
SET PATH=C:\emscripten;C:\MinGW\bin;C:\MinGW\msys\1.0\bin;%PATH%
make TARGET=html.release
