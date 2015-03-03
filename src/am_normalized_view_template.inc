#ifndef TNAME
#error TNAME undefined
#endif
#ifndef CTYPE
#error CTYPE undefined
#endif
#ifndef MINVAL
#error MINVAL undefined
#endif
#ifndef MAXVAL
#error MAXVAL undefined
#endif

#define LUA_TYPE LUA_TNUMBER
#define GET_CTYPE(L, idx) ((CTYPE)am_clamp(lua_tonumber(L, idx) * (lua_Number)MAXVAL, (lua_Number)MINVAL, (lua_Number)MAXVAL))
#define PUSH_CTYPE(L, x) lua_pushnumber(L, (lua_Number)(x) / (lua_Number)MAXVAL)

#include "am_view_template.inc"

#undef MINVAL
#undef MAXVAL