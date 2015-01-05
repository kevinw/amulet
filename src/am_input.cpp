#include "amulet.h"

const char *am_key_name(am_key key) {
    switch (key) {
        case AM_KEY_UNKNOWN: return "unknown";
        case AM_KEY_A: return "a";
        case AM_KEY_B: return "b";
        case AM_KEY_C: return "c";
        case AM_KEY_D: return "d";
        case AM_KEY_E: return "e";
        case AM_KEY_F: return "f";
        case AM_KEY_G: return "g";
        case AM_KEY_H: return "h";
        case AM_KEY_I: return "i";
        case AM_KEY_J: return "j";
        case AM_KEY_K: return "k";
        case AM_KEY_L: return "l";
        case AM_KEY_M: return "m";
        case AM_KEY_N: return "n";
        case AM_KEY_O: return "o";
        case AM_KEY_P: return "p";
        case AM_KEY_Q: return "q";
        case AM_KEY_R: return "r";
        case AM_KEY_S: return "s";
        case AM_KEY_T: return "t";
        case AM_KEY_U: return "u";
        case AM_KEY_V: return "v";
        case AM_KEY_W: return "w";
        case AM_KEY_X: return "x";
        case AM_KEY_Y: return "y";
        case AM_KEY_Z: return "z";
        case AM_KEY_1: return "1";
        case AM_KEY_2: return "2";
        case AM_KEY_3: return "3";
        case AM_KEY_4: return "4";
        case AM_KEY_5: return "5";
        case AM_KEY_6: return "6";
        case AM_KEY_7: return "7";
        case AM_KEY_8: return "8";
        case AM_KEY_9: return "9";
        case AM_KEY_0: return "0";
        case AM_KEY_ENTER: return "enter";
        case AM_KEY_ESCAPE: return "escape";
        case AM_KEY_BACKSPACE: return "backspace";
        case AM_KEY_TAB: return "tab";
        case AM_KEY_SPACE: return "space";
        case AM_KEY_MINUS: return "minus";
        case AM_KEY_EQUALS: return "equals";
        case AM_KEY_LEFTBRACKET: return "leftbracket";
        case AM_KEY_RIGHTBRACKET: return "rightbracket";
        case AM_KEY_BACKSLASH: return "backslash";
        case AM_KEY_SEMICOLON: return "semicolon";
        case AM_KEY_QUOTE: return "quote";
        case AM_KEY_BACKQUOTE: return "backquote";
        case AM_KEY_COMMA: return "comma";
        case AM_KEY_PERIOD: return "period";
        case AM_KEY_SLASH: return "slash";
        case AM_KEY_CAPSLOCK: return "capslock";
        case AM_KEY_F1: return "f1";
        case AM_KEY_F2: return "f2";
        case AM_KEY_F3: return "f3";
        case AM_KEY_F4: return "f4";
        case AM_KEY_F5: return "f5";
        case AM_KEY_F6: return "f6";
        case AM_KEY_F7: return "f7";
        case AM_KEY_F8: return "f8";
        case AM_KEY_F9: return "f9";
        case AM_KEY_F10: return "f10";
        case AM_KEY_F11: return "f11";
        case AM_KEY_F12: return "f12";
        case AM_KEY_PRINTSCREEN: return "printscreen";
        case AM_KEY_SCROLLLOCK: return "scrolllock";
        case AM_KEY_PAUSE: return "pause";
        case AM_KEY_INSERT: return "insert";
        case AM_KEY_HOME: return "home";
        case AM_KEY_PAGEUP: return "pageup";
        case AM_KEY_DELETE: return "delete";
        case AM_KEY_END: return "end";
        case AM_KEY_PAGEDOWN: return "pagedown";
        case AM_KEY_RIGHT: return "right";
        case AM_KEY_LEFT: return "left";
        case AM_KEY_DOWN: return "down";
        case AM_KEY_UP: return "up";
        case AM_KEY_KP_DIVIDE: return "kp_divide";
        case AM_KEY_KP_MULTIPLY: return "kp_multiply";
        case AM_KEY_KP_MINUS: return "kp_minus";
        case AM_KEY_KP_PLUS: return "kp_plus";
        case AM_KEY_KP_ENTER: return "kp_enter";
        case AM_KEY_KP_1: return "kp_1";
        case AM_KEY_KP_2: return "kp_2";
        case AM_KEY_KP_3: return "kp_3";
        case AM_KEY_KP_4: return "kp_4";
        case AM_KEY_KP_5: return "kp_5";
        case AM_KEY_KP_6: return "kp_6";
        case AM_KEY_KP_7: return "kp_7";
        case AM_KEY_KP_8: return "kp_8";
        case AM_KEY_KP_9: return "kp_9";
        case AM_KEY_KP_0: return "kp_0";
        case AM_KEY_KP_PERIOD: return "kp_period";
        case AM_KEY_LCTRL: return "lctrl";
        case AM_KEY_LSHIFT: return "lshift";
        case AM_KEY_LALT: return "lalt";
        case AM_KEY_LGUI: return "lgui";
        case AM_KEY_RCTRL: return "rctrl";
        case AM_KEY_RSHIFT: return "rshift";
        case AM_KEY_RALT: return "ralt";
        case AM_KEY_RGUI: return "rgui";
        case AM_NUM_KEYS: return NULL;
    }
    return NULL;
}