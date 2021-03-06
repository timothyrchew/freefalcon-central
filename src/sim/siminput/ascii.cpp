#include <cISO646>
#include "ascii.h"

struct ASCII_TABLE Key_Chart[256] =
{
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x00
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_ESCAPE          0x01
    {  49, 33,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_DIGIT_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_1               0x02
    {  50, 64,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_DIGIT_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_2               0x03
    {  51, 35,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_DIGIT_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_3               0x04
    {  52, 36,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_DIGIT_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_4               0x05
    {  53, 37,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_DIGIT_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_5               0x06
    {  54, 94,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_DIGIT_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_6               0x07
    {  55, 38,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_DIGIT_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_7               0x08
    {  56, 42,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_DIGIT_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_8               0x09
    {  57, 40,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_DIGIT_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_9               0x0A
    {  48, 41,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_DIGIT_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_0               0x0B
    {  45, 95,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_DIGIT_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_MINUS           0x0C    /* - on main keyboard */
    {  61, 43,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_DIGIT_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_EQUALS          0x0D
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_BACK            0x0E    /* backspace */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_TAB             0x0F
    { 113, 81,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_Q               0x10
    { 119, 87,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_W               0x11
    { 101, 69,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_E               0x12
    { 114, 82,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_R               0x13
    { 116, 84,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_T               0x14
    { 121, 89,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_Y               0x15
    { 117, 85,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_U               0x16
    { 105, 73,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_I               0x17
    { 111, 79,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_O               0x18
    { 112, 80,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_P               0x19
    {  91, 123,  0,  0,  0,  0,  0,  0,      _IS_ASCII_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_LBRACKET        0x1A
    {  93, 125,  0,  0,  0,  0,  0,  0,      _IS_ASCII_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_RBRACKET        0x1B
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_RETURN          0x1C    /* Enter on main keyboard */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_LCONTROL        0x1D
    {  97, 65,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_A               0x1E
    { 115, 83,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_S               0x1F
    { 100, 68,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_D               0x20
    { 102, 70,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_F               0x21
    { 103, 71,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_G               0x22
    { 104, 72,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_H               0x23
    { 106, 74,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_J               0x24
    { 107, 75,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_K               0x25
    { 108, 76,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_L               0x26
    {  59, 58,  0,  0,  0,  0,  0,  0,      _IS_ASCII_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_SEMICOLON       0x27
    {  39, 34,  0,  0,  0,  0,  0,  0,      _IS_ASCII_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_APOSTROPHE      0x28
    {  96, 126,  0,  0,  0,  0,  0,  0,      _IS_ASCII_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_GRAVE           0x29    /* accent grave */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_LSHIFT          0x2A
    {  92, 124,  0,  0,  0,  0,  0,  0,      _IS_ASCII_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_BACKSLASH       0x2B
    { 122, 90,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_Z               0x2C
    { 120, 88,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_X               0x2D
    {  99, 67,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_C               0x2E
    { 118, 86,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_V               0x2F
    {  98, 66,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_B               0x30
    { 110, 78,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_N               0x31
    { 109, 77,  0,  0,  0,  0,  0,  0,      _IS_ASCII_ bitor _IS_ALPHA_, _IS_ASCII_ bitor _IS_ALPHA_, 0, 0, 0, 0, 0, 0, }, // DIK_M               0x32
    {  44, 60,  0,  0,  0,  0,  0,  0,      _IS_ASCII_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_COMMA           0x33
    {  46, 62,  0,  0,  0,  0,  0,  0,      _IS_ASCII_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_PERIOD          0x34    /* . on main keyboard */
    {  47, 63,  0,  0,  0,  0,  0,  0,      _IS_ASCII_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_SLASH           0x35    /* / on main keyboard */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_RSHIFT          0x36
    {  42, 42,  0,  0,  0,  0,  0,  0,      _IS_ASCII_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_MULTIPLY        0x37    /* * on numeric keypad */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_LMENU           0x38    /* left Alt */
    {  32, 32,  0,  0,  0,  0,  0,  0,      _IS_ASCII_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_SPACE           0x39
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_CAPITAL         0x3A
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_F1              0x3B
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_F2              0x3C
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_F3              0x3D
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_F4              0x3E
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_F5              0x3F
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_F6              0x40
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_F7              0x41
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_F8              0x42
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_F9              0x43
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_F10             0x44
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_NUMLOCK         0x45
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_SCROLL          0x46    /* Scroll Lock */
    {   0, 55,  0,  0,  0,  0,  0,  0,      0, _IS_ASCII_ bitor _IS_DIGIT_, 0, 0, 0, 0, 0, 0, }, // DIK_NUMPAD7         0x47
    {   0, 56,  0,  0,  0,  0,  0,  0,      0, _IS_ASCII_ bitor _IS_DIGIT_, 0, 0, 0, 0, 0, 0, }, // DIK_NUMPAD8         0x48
    {   0, 57,  0,  0,  0,  0,  0,  0,      0, _IS_ASCII_ bitor _IS_DIGIT_, 0, 0, 0, 0, 0, 0, }, // DIK_NUMPAD9         0x49
    {  45, 45,  0,  0,  0,  0,  0,  0,      _IS_ASCII_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_SUBTRACT        0x4A    /* - on numeric keypad */
    {   0, 52,  0,  0,  0,  0,  0,  0,      0, _IS_ASCII_ bitor _IS_DIGIT_, 0, 0, 0, 0, 0, 0, }, // DIK_NUMPAD4         0x4B
    {   0, 53,  0,  0,  0,  0,  0,  0,      0, _IS_ASCII_ bitor _IS_DIGIT_, 0, 0, 0, 0, 0, 0, }, // DIK_NUMPAD5         0x4C
    {   0, 54,  0,  0,  0,  0,  0,  0,      0, _IS_ASCII_ bitor _IS_DIGIT_, 0, 0, 0, 0, 0, 0, }, // DIK_NUMPAD6         0x4D
    {  43, 43,  0,  0,  0,  0,  0,  0,      _IS_ASCII_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_ADD             0x4E    /* + on numeric keypad */
    {   0, 49,  0,  0,  0,  0,  0,  0,      0, _IS_ASCII_ bitor _IS_DIGIT_, 0, 0, 0, 0, 0, 0, }, // DIK_NUMPAD1         0x4F
    {   0, 50,  0,  0,  0,  0,  0,  0,      0, _IS_ASCII_ bitor _IS_DIGIT_, 0, 0, 0, 0, 0, 0, }, // DIK_NUMPAD2         0x50
    {   0, 51,  0,  0,  0,  0,  0,  0,      0, _IS_ASCII_ bitor _IS_DIGIT_, 0, 0, 0, 0, 0, 0, }, // DIK_NUMPAD3         0x51
    {   0, 48,  0,  0,  0,  0,  0,  0,      0, _IS_ASCII_ bitor _IS_DIGIT_, 0, 0, 0, 0, 0, 0, }, // DIK_NUMPAD0         0x52
    {   0, 46,  0,  0,  0,  0,  0,  0,      0, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_DECIMAL         0x53    /* . on numeric keypad */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x54
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x55
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x56
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_F11             0x57
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_F12             0x58
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x59
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x5A
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x5B
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x5C
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x5D
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x5E
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x5F
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x60
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x61
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x62
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x63
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_F13             0x64    /*                     (NEC PC98) */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_F14             0x65    /*                     (NEC PC98) */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_F15             0x66    /*                     (NEC PC98) */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x67
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x68
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x69
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x6A
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x6B
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x6C
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x6D
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x6E
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x6F
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_KANA            0x70    /* (Japanese keyboard)            */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x71
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x72
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x73
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x74
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x75
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x76
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x77
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x78
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_CONVERT         0x79    /* (Japanese keyboard)            */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x7A
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_NOCONVERT       0x7B    /* (Japanese keyboard)            */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x7C
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_YEN             0x7D    /* (Japanese keyboard)            */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x7E
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x7F
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x80
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x81
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x82
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x83
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x84
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x85
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x86
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x87
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x88
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x89
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x8A
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x8B
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x8C
    {  61, 61,  0,  0,  0,  0,  0,  0,      _IS_ASCII_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_NUMPADEQUALS    0x8D    /* = on numeric keypad (NEC PC98) */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x8E
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x8F
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_CIRCUMFLEX      0x90    /* (Japanese keyboard)            */
    {   0, 64,  0,  0,  0,  0,  0,  0,      0, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_AT              0x91    /*                     (NEC PC98) */
    {   0, 58,  0,  0,  0,  0,  0,  0,      0, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_COLON           0x92    /*                     (NEC PC98) */
    {   0, 95,  0,  0,  0,  0,  0,  0,      0, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_UNDERLINE       0x93    /*                     (NEC PC98) */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_KANJI           0x94    /* (Japanese keyboard)            */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_STOP            0x95    /*                     (NEC PC98) */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_AX              0x96    /*                     (Japan AX) */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_UNLABELED       0x97    /*                        (J3100) */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x98
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x99
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x9A
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x9B
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_NUMPADENTER     0x9C    /* Enter on numeric keypad */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_RCONTROL        0x9D
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x9E
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0x9F
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xA0
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xA1
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xA2
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xA3
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xA4
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xA5
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xA6
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xA7
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xA8
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xA9
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xAA
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xAB
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xAC
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xAD
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xAE
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xAF
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xB0
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xB1
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xB2
    {  44, 44,  0,  0,  0,  0,  0,  0,      _IS_ASCII_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_NUMPADCOMMA     0xB3    /* , on numeric keypad (NEC PC98) */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xB4
    {  47, 47,  0,  0,  0,  0,  0,  0,      _IS_ASCII_, _IS_ASCII_, 0, 0, 0, 0, 0, 0, }, // DIK_DIVIDE          0xB5    /* / on numeric keypad */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xB6
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_SYSRQ           0xB7
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_RMENU           0xB8    /* right Alt */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xB9
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xBA
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xBB
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xBC
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xBD
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xBE
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xBF
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xC0
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xC1
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xC2
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xC3
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xC4
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xC5
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xC6
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_HOME            0xC7    /* Home on arrow keypad */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_UP              0xC8    /* UpArrow on arrow keypad */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_PRIOR           0xC9    /* PgUp on arrow keypad */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xCA
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_LEFT            0xCB    /* LeftArrow on arrow keypad */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xCC
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_RIGHT           0xCD    /* RightArrow on arrow keypad */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xCE
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_END             0xCF    /* End on arrow keypad */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_DOWN            0xD0    /* DownArrow on arrow keypad */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_NEXT            0xD1    /* PgDn on arrow keypad */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_INSERT          0xD2    /* Insert on arrow keypad */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_DELETE          0xD3    /* Delete on arrow keypad */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xD4
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xD5
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xD6
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xD7
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xD8
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xD9
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xDA
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_LWIN            0xDB    /* Left Windows key */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_RWIN            0xDC    /* Right Windows key */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // DIK_APPS            0xDD    /* AppMenu key */
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xDE
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xDF
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xE0
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xE1
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xE2
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xE3
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xE4
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xE5
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xE6
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xE7
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xE8
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xE9
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xEA
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xEB
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xEC
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xED
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xEE
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xEF
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xF0
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xF1
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xF2
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xF3
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xF4
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xF5
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xF6
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xF7
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xF8
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xF9
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xFA
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xFB
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xFC
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xFD
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xFE
    {   0,  0,  0,  0,  0,  0,  0,  0,      0, 0, 0, 0, 0, 0, 0, 0, }, // 0 (Space holder)    0xFF
};
