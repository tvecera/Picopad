#include "../include.h"

// format: compressed 8-bit paletted pixel graphics
// image width: 320 pixels
// image height: 240 lines
// image pitch: 320 bytes

const u16 Scd41Img_Pal[256] __attribute__((aligned(4))) = {
        0x0840, 0xF7BE, 0xD562, 0x2800, 0x41C2, 0xB482, 0x3120, 0x2124, 0xA800, 0x3165, 0xCE79, 0x9BE1, 0x39A0, 0x5221, 0x49E0, 0x39E7,
        0x73AE, 0x7BCF, 0x72E1, 0x62A1, 0x2965, 0x4DD1, 0x0000, 0xCD02, 0xD562, 0x4228, 0x6281, 0x8361, 0x7B21, 0x6AA1, 0x0020, 0xC4E2,
        0x18E3, 0x8B81, 0x7B41, 0xFFFF, 0x050B, 0x0861, 0x52AA, 0x6AC1, 0xEE02, 0xCD22, 0xAD75, 0x632C, 0xE71C, 0xBDF7, 0x3140, 0x18C3,
        0x6E94, 0x5A61, 0x7B21, 0x39C7, 0x0840, 0xCD22, 0x7301, 0xDDA2, 0x8B61, 0x8341, 0x18C0, 0xE5C2, 0x3960, 0xC4E2, 0x8341, 0x5221,
        0x3140, 0x0000, 0x056C, 0xAC41, 0x4208, 0x0020, 0x2000, 0x9CF3, 0x8C51, 0xC800, 0x20E0, 0x6E13, 0x04EB, 0x96B7, 0x04CA, 0x6B4D,
        0x630C, 0x356F, 0x49C0, 0xCD22, 0x6AA1, 0x15CE, 0x058D, 0xDEDB, 0x2900, 0xA421, 0x8361, 0xC000, 0xDDA2, 0xB5B6, 0xFFFF, 0xEDE2,
        0xB4A2, 0x8341, 0xBCA2, 0xC618, 0xF79E, 0x93A1, 0xD69A, 0x10A2, 0x9C01, 0xB4A2, 0xBCE2, 0x3140, 0xDDA2, 0x3980, 0xE5E2, 0x41C0,
        0x8B81, 0x93C1, 0x0860, 0x5200, 0x93A1, 0xEDE2, 0x5200, 0x93C1, 0x5A61, 0xAC61, 0x93C1, 0x8BA1, 0x2920, 0x5A41, 0x20E0, 0x9492,
        0x6281, 0x054C, 0x7B01, 0xB482, 0x6694, 0xAEF9, 0xE5C2, 0x0CEB, 0x18E3, 0x052C, 0x738E, 0x2920, 0xBF5A, 0xEE02, 0xEF5D, 0x93C1,
        0x5220, 0xE5A2, 0x4A69, 0x0800, 0x8341, 0x25EF, 0x2945, 0x93E1, 0x0000, 0x0840, 0x1040, 0xE73C, 0x5AEB, 0x3982, 0xC800, 0x1D2D,
        0x20C0, 0xD542, 0x2104, 0xE5C2, 0x3980, 0x0841, 0x0CEC, 0x4A49, 0xDD82, 0x10A0, 0x9C01, 0x39C7, 0x1082, 0xEF7D, 0x6281, 0xEE02,
        0xF7DF, 0xD562, 0x528A, 0x0000, 0xFFDF, 0x3980, 0xAC61, 0x8410, 0xCF7C, 0x9BE1, 0x94B2, 0x8B81, 0x31A6, 0xE7BD, 0x9000, 0xA514,
        0xB596, 0x3061, 0x41C0, 0x2103, 0x5ACB, 0x86B6, 0x2104, 0x6261, 0xAC62, 0xBCC2, 0xCE59, 0xD6BA, 0x9636, 0x8C71, 0x9CD3, 0x41A0,
        0x5000, 0x6B4D, 0xD6BA, 0x8C51, 0xD69A, 0x18C3, 0x2945, 0x6B6D, 0x5ACB, 0xF7BE, 0xB596, 0x738E, 0xF79E, 0x4228, 0x9CF3, 0x9E36,
        0x046A, 0x04AB, 0x0409, 0x0245, 0x0020, 0xEF5D, 0x4A69, 0x4208, 0x94B2, 0xEF7D, 0x1082, 0xFFFF, 0x25EF, 0x058D, 0x04CB, 0x0204,
        0x6B6D, 0x2104, 0x10A2, 0xA739, 0x048A, 0x0183, 0x6694, 0x0429, 0x0143, 0x0000, 0x1DEF, 0x056C, 0x044A, 0x03A8,
};

// C code for the RLE compressed pixel array
const u8 Scd41Img_RLE[3914] __attribute__((aligned(4))) = {
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0x92, 0x41, 0x05, 0xA9, 0x0E, 0x82,
        0x27, 0x0E, 0xA9, 0x86, 0x41, 0x04, 0x06, 0x80, 0x82, 0x76, 0xA0, 0x82, 0x41, 0x00, 0x8B, 0x82,
        0xC2, 0x01, 0x06, 0x00, 0x88, 0x41, 0x03, 0x00, 0x0D, 0x0D, 0x7C, 0x84, 0x41, 0x02, 0x0E, 0x0D,
        0x40, 0xFF, 0x41, 0xEC, 0x41, 0x90, 0x41, 0x02, 0x72, 0x59, 0xAF, 0x81, 0x8D, 0x01, 0xA8, 0x36,
        0x83, 0x41, 0x08, 0x0D, 0xB1, 0x28, 0x8D, 0x28, 0x8D, 0x5F, 0x71, 0xA9, 0x80, 0x41, 0x00, 0x0B,
        0x83, 0x28, 0x02, 0x8D, 0x02, 0x1A, 0x86, 0x41, 0x03, 0x5A, 0x8D, 0x8D, 0x32, 0x83, 0x41, 0x03,
        0x1D, 0x28, 0x28, 0x8F, 0xFF, 0x41, 0xEC, 0x41, 0x8F, 0x41, 0x01, 0x1E, 0x3D, 0x85, 0x28, 0x00,
        0x12, 0x81, 0x41, 0x02, 0x70, 0xAF, 0xAF, 0x81, 0x8D, 0x02, 0x28, 0x8D, 0xC9, 0x80, 0x41, 0x00,
        0x0B, 0x86, 0x28, 0x00, 0x43, 0x84, 0x41, 0x04, 0xCF, 0x5F, 0x28, 0x28, 0x32, 0x82, 0x41, 0x04,
        0xA4, 0xA3, 0x28, 0x28, 0x8F, 0xFF, 0x41, 0xEC, 0x41, 0x8F, 0x41, 0x0E, 0x52, 0x28, 0x28, 0x53,
        0x1D, 0x58, 0x90, 0x43, 0x28, 0x8D, 0x37, 0x1E, 0x41, 0x41, 0x52, 0x80, 0x8D, 0x11, 0x0B, 0x73,
        0x76, 0xB9, 0x75, 0x8D, 0x8D, 0x80, 0x41, 0x41, 0x0B, 0x28, 0x28, 0x68, 0x80, 0x27, 0x32, 0x05,
        0x80, 0x28, 0x00, 0x54, 0x82, 0x41, 0x05, 0x34, 0x29, 0x8D, 0xAF, 0x8D, 0x32, 0x80, 0x41, 0x02,
        0x1E, 0x36, 0xA8, 0x80, 0x28, 0x00, 0x8F, 0xFF, 0x41, 0xEC, 0x41, 0x8F, 0x41, 0x03, 0x38, 0x28,
        0x28, 0x61, 0x80, 0x41, 0x0A, 0x3A, 0x86, 0x8D, 0x75, 0x3C, 0x41, 0x41, 0x1F, 0x28, 0x8D, 0x3E,
        0x81, 0x41, 0x09, 0x65, 0x8D, 0x8D, 0x6A, 0x41, 0x41, 0x0B, 0x28, 0x28, 0x22, 0x81, 0x41, 0x04,
        0x82, 0xAF, 0x8D, 0x18, 0x34, 0x81, 0x41, 0x00, 0x65, 0x81, 0x28, 0x00, 0x1C, 0x80, 0x41, 0x06,
        0x60, 0x8D, 0x28, 0x5F, 0x28, 0x28, 0x8F, 0xFF, 0x41, 0xEC, 0x41, 0x8F, 0x41, 0x09, 0x27, 0x28,
        0x28, 0x37, 0xBB, 0x2E, 0x41, 0x41, 0xA9, 0x34, 0x80, 0x41, 0x04, 0x58, 0x28, 0x8D, 0x37, 0x72,
        0x81, 0x41, 0x09, 0x72, 0x1C, 0xB5, 0x1E, 0x41, 0x41, 0x0B, 0x28, 0x28, 0x22, 0x81, 0x41, 0x04,
        0x98, 0x02, 0x8D, 0x8D, 0x6D, 0x80, 0x41, 0x06, 0x0E, 0xAF, 0x28, 0x83, 0x28, 0x28, 0x1C, 0x80,
        0x41, 0x06, 0xA1, 0xAF, 0x68, 0x27, 0x28, 0x28, 0x8F, 0xFF, 0x41, 0xEC, 0x41, 0x8F, 0x41, 0x01,
        0xA0, 0x02, 0x81, 0x8D, 0x02, 0x3D, 0x3E, 0x8B, 0x81, 0x41, 0x03, 0x0D, 0x8D, 0x8D, 0xC9, 0x88,
        0x41, 0x03, 0x0B, 0x28, 0x28, 0x22, 0x82, 0x41, 0x0D, 0x60, 0x8D, 0x8D, 0x80, 0x41, 0x41, 0xA9,
        0xA1, 0x28, 0xC9, 0x13, 0x28, 0x28, 0x1C, 0x80, 0x41, 0x06, 0xAA, 0x6F, 0x41, 0xC7, 0x8D, 0x8D,
        0x71, 0xFF, 0x41, 0xEC, 0x41, 0x90, 0x41, 0x01, 0x52, 0x29, 0x81, 0x8D, 0x09, 0x28, 0x8D, 0x69,
        0x3A, 0x41, 0x41, 0x82, 0x28, 0x8D, 0x59, 0x88, 0x41, 0x03, 0x0B, 0x28, 0x28, 0x22, 0x82, 0x41,
        0x0D, 0x59, 0x28, 0x28, 0x39, 0x41, 0x41, 0x0B, 0x5F, 0x86, 0x06, 0x80, 0x28, 0x28, 0x1C, 0x83,
        0x41, 0x03, 0xC7, 0x8D, 0x28, 0x8F, 0xFF, 0x41, 0xEC, 0x41, 0x92, 0x41, 0x03, 0x76, 0xB6, 0x75,
        0x28, 0x80, 0x8D, 0x06, 0x17, 0xA9, 0x41, 0x61, 0x8D, 0x28, 0x43, 0x88, 0x41, 0x03, 0x0B, 0x28,
        0x28, 0x22, 0x82, 0x41, 0x0D, 0x68, 0x8D, 0x8D, 0x21, 0x41, 0x0D, 0x8D, 0x8D, 0x36, 0x41, 0x13,
        0x28, 0x28, 0x1C, 0x83, 0x41, 0x03, 0xAE, 0x28, 0x8D, 0x71, 0xFF, 0x41, 0xEC, 0x41, 0x94, 0x41,
        0x0B, 0xA9, 0x80, 0x43, 0x75, 0x28, 0x8D, 0x31, 0x41, 0x31, 0x8D, 0x8D, 0xC9, 0x83, 0x41, 0x00,
        0xA9, 0x81, 0x41, 0x03, 0x0B, 0x28, 0x28, 0x22, 0x82, 0x41, 0x10, 0x60, 0x28, 0x28, 0x1D, 0xA9,
        0x18, 0x8D, 0x17, 0xB5, 0xB5, 0x1C, 0x8D, 0x8D, 0xBB, 0xB5, 0x72, 0xB3, 0x80, 0x41, 0x03, 0xC7,
        0x8D, 0x8D, 0x8F, 0xFF, 0x41, 0xEC, 0x41, 0x8E, 0x41, 0x04, 0x1E, 0x68, 0x69, 0x6A, 0xA9, 0x81,
        0x41, 0x09, 0xBB, 0x8D, 0x8D, 0x77, 0x41, 0x06, 0x8D, 0x8D, 0x37, 0x72, 0x81, 0x41, 0x09, 0x6D,
        0xA3, 0xC9, 0x1C, 0x1E, 0x41, 0x0B, 0x28, 0x28, 0x22, 0x82, 0x41, 0x05, 0xA1, 0x8D, 0x28, 0xCF,
        0xB5, 0x28, 0x86, 0x8D, 0x00, 0xC2, 0x81, 0x41, 0x03, 0xAE, 0x28, 0x28, 0x8F, 0xFF, 0x41, 0xEC,
        0x41, 0x8F, 0x41, 0x03, 0x17, 0x28, 0x28, 0x70, 0x81, 0x41, 0x09, 0x0B, 0x28, 0x8D, 0x74, 0x41,
        0x1E, 0x35, 0x28, 0x28, 0x3E, 0x81, 0x41, 0x09, 0x79, 0x8D, 0x8D, 0x6A, 0x41, 0x41, 0x0B, 0x28,
        0x28, 0x22, 0x81, 0x41, 0x06, 0xAE, 0x28, 0x8D, 0xB1, 0x72, 0xB5, 0x28, 0x86, 0x8D, 0x00, 0x6F,
        0x81, 0x41, 0x03, 0xAE, 0x28, 0x8D, 0x71, 0xFF, 0x41, 0xEC, 0x41, 0x8F, 0x41, 0x15, 0xBB, 0x28,
        0x28, 0x3B, 0x8F, 0x52, 0x73, 0x74, 0x75, 0x8D, 0x8D, 0x52, 0x41, 0x41, 0x76, 0x28, 0x8D, 0xAF,
        0x7A, 0x0E, 0x78, 0x79, 0x80, 0x8D, 0x10, 0x54, 0x41, 0x41, 0x0B, 0x28, 0x28, 0x68, 0xC7, 0x80,
        0x12, 0xB9, 0xA3, 0x8D, 0x8D, 0xC7, 0x41, 0x3A, 0x82, 0x80, 0x05, 0x74, 0x75, 0x28, 0x68, 0x80,
        0xA0, 0x81, 0x41, 0x03, 0xC7, 0x8D, 0x8D, 0x8F, 0xFF, 0x41, 0xEC, 0x41, 0x8F, 0x41, 0x01, 0x34,
        0x3D, 0x80, 0x8D, 0x80, 0x28, 0x03, 0x8D, 0x8D, 0x83, 0x98, 0x80, 0x41, 0x01, 0x65, 0x8D, 0x80,
        0x28, 0x08, 0x8D, 0x28, 0x8D, 0x8D, 0x59, 0x98, 0x41, 0x41, 0x0B, 0x86, 0x28, 0x00, 0x43, 0x85,
        0x41, 0x03, 0x1A, 0x28, 0x8D, 0x1C, 0x83, 0x41, 0x03, 0xAE, 0x28, 0x28, 0x8F, 0xFF, 0x41, 0xEC,
        0x41, 0x90, 0x41, 0x02, 0x58, 0x59, 0x75, 0x81, 0x8D, 0x02, 0x75, 0x8F, 0x98, 0x82, 0x41, 0x01,
        0x78, 0x18, 0x80, 0x8D, 0x03, 0x28, 0x37, 0xBB, 0x00, 0x80, 0x41, 0x00, 0x0B, 0x80, 0x28, 0x80,
        0x8D, 0x03, 0x75, 0x53, 0x54, 0x1E, 0x85, 0x41, 0x03, 0x1A, 0x8D, 0x8D, 0x1C, 0x83, 0x41, 0x03,
        0xAE, 0x28, 0x8D, 0x71, 0xFF, 0x41, 0xEC, 0x41, 0x92, 0x41, 0x05, 0x7C, 0x0D, 0x36, 0x1D, 0xCF,
        0x34, 0x85, 0x41, 0x05, 0x98, 0x40, 0x1D, 0x36, 0x90, 0x3A, 0x82, 0x41, 0x01, 0x8B, 0x52, 0x81,
        0xC2, 0x01, 0x06, 0x1E, 0x88, 0x41, 0x03, 0xA0, 0x6F, 0x6F, 0x4A, 0x83, 0x41, 0x03, 0x3A, 0xC2,
        0x6F, 0x7C, 0xFF, 0x41, 0xEC, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xA1, 0x41, 0x04, 0xBC,
        0xBF, 0x9B, 0xCD, 0x20, 0xFF, 0x41, 0xE9, 0x41, 0x03, 0x25, 0x63, 0x5D, 0xA5, 0xA2, 0x41, 0xA0,
        0x41, 0x05, 0x45, 0x2C, 0xCA, 0x11, 0x2C, 0xDA, 0xFF, 0x41, 0xE9, 0x41, 0x03, 0x47, 0x23, 0x5E,
        0xE8, 0xA2, 0x41, 0x9B, 0x41, 0x00, 0xB2, 0x80, 0xC0, 0x07, 0xBA, 0xB2, 0x5E, 0xC1, 0x08, 0x92,
        0x5E, 0x20, 0xFF, 0x41, 0xE7, 0x41, 0x05, 0xB2, 0x5E, 0xE5, 0xE9, 0x23, 0x50, 0xA1, 0x41, 0xA0,
        0x41, 0x06, 0x10, 0x01, 0x03, 0x49, 0x14, 0x23, 0x0F, 0xFF, 0x41, 0xE0, 0x41, 0x01, 0x16, 0xA2,
        0x81, 0x41, 0x07, 0x88, 0xAD, 0x23, 0x26, 0xA7, 0x23, 0x01, 0xBC, 0xA0, 0x41, 0x9C, 0x41, 0x0A,
        0x45, 0xC0, 0xC0, 0xBA, 0xDB, 0xD9, 0x46, 0x49, 0x09, 0x5E, 0x0F, 0x81, 0x41, 0x08, 0x45, 0xD6,
        0xAB, 0xEA, 0x41, 0x41, 0xB3, 0x14, 0x45, 0xFF, 0x41, 0xD2, 0x41, 0x0F, 0xB3, 0xDA, 0x23, 0x4F,
        0x41, 0x41, 0x16, 0x2D, 0x23, 0xBF, 0x41, 0x41, 0xB7, 0x23, 0x57, 0xA5, 0x9F, 0x41, 0xA0, 0x41,
        0x14, 0x10, 0xD9, 0x03, 0x49, 0x09, 0x5E, 0xE7, 0x41, 0x41, 0xA5, 0xB7, 0x5E, 0x5E, 0x23, 0x5E,
        0x50, 0x16, 0xCA, 0x2D, 0x2C, 0xEA, 0xFF, 0x41, 0xD1, 0x41, 0x0F, 0x2B, 0xEB, 0x5E, 0x01, 0xBC,
        0x41, 0x10, 0x23, 0x9B, 0xAC, 0x41, 0x41, 0x16, 0x5D, 0x5E, 0xA2, 0x9F, 0x41, 0x9B, 0x41, 0x00,
        0xB2, 0x80, 0xC0, 0x15, 0xBA, 0x10, 0xD9, 0x03, 0x49, 0x09, 0x5E, 0x0F, 0x41, 0x41, 0xC0, 0x5E,
        0x23, 0x57, 0x47, 0xD2, 0x2B, 0xD6, 0x2C, 0x41, 0x5D, 0x26, 0xFF, 0x41, 0xD0, 0x41, 0x09, 0x96,
        0xD9, 0x5E, 0x2A, 0x5E, 0x2C, 0x44, 0x01, 0x5E, 0xA7, 0x81, 0x41, 0x01, 0x16, 0x2F, 0xA0, 0x41,
        0xA0, 0x41, 0x0B, 0xDB, 0xD9, 0x46, 0x49, 0x14, 0x5E, 0xE7, 0x41, 0x26, 0x23, 0x23, 0x92, 0x80,
        0x41, 0x05, 0x16, 0x41, 0x63, 0xCA, 0x57, 0x25, 0xFF, 0x41, 0xCF, 0x41, 0x09, 0x45, 0x0A, 0x5E,
        0xCD, 0x41, 0xC0, 0x23, 0xE9, 0x23, 0xDE, 0xA7, 0x41, 0x9C, 0x41, 0x0E, 0x45, 0xCE, 0xCE, 0xB7,
        0xDB, 0x01, 0x46, 0x49, 0x09, 0x5E, 0x0F, 0x41, 0xCE, 0x23, 0xD4, 0x84, 0x41, 0x01, 0xF1, 0xF9,
        0xFF, 0x41, 0xD0, 0x41, 0x09, 0x48, 0x5E, 0xD2, 0xA5, 0x41, 0xEA, 0x57, 0x5E, 0x2C, 0x25, 0xA7,
        0x41, 0x9D, 0x41, 0x0D, 0x67, 0x67, 0xF2, 0x10, 0xD9, 0x03, 0x49, 0x09, 0x5E, 0xE7, 0x41, 0x63,
        0x5E, 0xCD, 0xFF, 0x41, 0xD8, 0x41, 0x09, 0x33, 0x5E, 0x5E, 0xAB, 0x41, 0x41, 0xA5, 0x9B, 0x23,
        0x44, 0xA8, 0x41, 0x9B, 0x41, 0x10, 0xAB, 0xB7, 0xB7, 0x11, 0xD1, 0x10, 0xD9, 0x03, 0x49, 0x09,
        0x5E, 0x0F, 0x41, 0xBF, 0x23, 0xD2, 0xB3, 0xFF, 0x41, 0xD6, 0x41, 0x03, 0x16, 0x0A, 0x23, 0x48,
        0x80, 0x41, 0x02, 0xB7, 0x5E, 0xBF, 0x88, 0x41, 0x02, 0x47, 0xD4, 0xA5, 0x9B, 0x41, 0x9B, 0x41,
        0x14, 0x67, 0x14, 0xBC, 0x14, 0x96, 0xDB, 0xD9, 0x46, 0x49, 0x14, 0x5E, 0xE7, 0x41, 0xD7, 0x23,
        0x23, 0x4F, 0xA5, 0x41, 0xA5, 0xAC, 0xFF, 0x41, 0xD2, 0x41, 0x09, 0xC4, 0x5E, 0xCB, 0x45, 0x41,
        0x41, 0x2F, 0x64, 0x5E, 0x07, 0x88, 0x41, 0x02, 0xDA, 0x23, 0xDB, 0x9B, 0x41, 0x9C, 0x41, 0x13,
        0x16, 0x2B, 0x50, 0x26, 0x10, 0x01, 0x46, 0x49, 0x09, 0x5E, 0x0F, 0x41, 0x45, 0xD4, 0x5E, 0x23,
        0xAD, 0xCA, 0xB4, 0x2B, 0xFF, 0x41, 0xD1, 0x41, 0x03, 0xA5, 0x2C, 0x5E, 0x19, 0x80, 0x41, 0x07,
        0xCE, 0x5E, 0xDF, 0xFC, 0xF4, 0xE2, 0xE3, 0xF9, 0x84, 0x41, 0x03, 0x0F, 0x23, 0x9B, 0xA5, 0x9A,
        0x41, 0x9C, 0x41, 0x13, 0xB3, 0xE6, 0xA7, 0xE7, 0x10, 0xD9, 0x03, 0x49, 0x09, 0x5E, 0xE7, 0x41,
        0x41, 0x25, 0xBA, 0xE9, 0xEB, 0xB4, 0x0A, 0x19, 0xFF, 0x41, 0xD1, 0x41, 0x02, 0x8A, 0x5E, 0x63,
        0x80, 0x41, 0x03, 0xEA, 0x01, 0xEB, 0xFA, 0x80, 0x42, 0x02, 0x56, 0xEE, 0xEF, 0x84, 0x41, 0x02,
        0x2D, 0x23, 0xF0, 0x9A, 0x41, 0x9B, 0x41, 0x0B, 0xF1, 0xA7, 0xE6, 0xA7, 0xE7, 0x10, 0xD9, 0x46,
        0x49, 0x09, 0x5E, 0x0F, 0x81, 0x41, 0x02, 0xF9, 0xAC, 0x45, 0xFF, 0x41, 0xD3, 0x41, 0x02, 0x0A,
        0x5E, 0xE7, 0x80, 0x41, 0x0B, 0xD1, 0x23, 0xF3, 0x42, 0x56, 0xED, 0x56, 0x56, 0x42, 0x56, 0xF4,
        0xF5, 0x82, 0x41, 0x03, 0x19, 0x23, 0x9B, 0xB3, 0x99, 0x41, 0x9B, 0x41, 0x0B, 0x14, 0x2B, 0x50,
        0x2B, 0xB2, 0x10, 0xD9, 0x03, 0x49, 0x09, 0x5E, 0xE7, 0xFF, 0x41, 0xD9, 0x41, 0x02, 0xF2, 0x5E,
        0x57, 0x81, 0x41, 0x05, 0x63, 0x5E, 0xF6, 0x42, 0xED, 0xED, 0x80, 0x56, 0x0B, 0x42, 0x42, 0x56,
        0xE2, 0xF8, 0xF9, 0x41, 0x41, 0xB3, 0xD4, 0x23, 0x07, 0x99, 0x41, 0x9F, 0x41, 0x08, 0xA2, 0xD2,
        0x01, 0x46, 0x49, 0x09, 0x5E, 0xC0, 0xA5, 0xFF, 0x41, 0xD8, 0x41, 0x02, 0xC4, 0x23, 0xBA, 0x81,
        0x41, 0x06, 0xAD, 0x5E, 0xFA, 0x56, 0x56, 0xED, 0xED, 0x83, 0x56, 0x07, 0xED, 0xFB, 0xFC, 0xFD,
        0xFE, 0xCC, 0x5E, 0x9C, 0x99, 0x41, 0x9E, 0x41, 0x0A, 0x14, 0xE5, 0x8E, 0xB2, 0x03, 0x49, 0x98,
        0x10, 0xB4, 0x0A, 0xF2, 0xFF, 0x41, 0xD7, 0x41, 0x02, 0xCD, 0x23, 0x50, 0x80, 0x41, 0x03, 0xF2,
        0x23, 0xBD, 0x81, 0x80, 0x56, 0x88, 0xED, 0x03, 0x56, 0x84, 0x5E, 0xCD, 0x99, 0x41, 0x9D, 0x41,
        0x0C, 0xA2, 0x64, 0x5D, 0xF2, 0xC1, 0xBE, 0x5B, 0xBE, 0x46, 0x14, 0xCB, 0xD2, 0x45, 0xFF, 0x41,
        0xD6, 0x41, 0x02, 0x4F, 0x23, 0x48, 0x80, 0x41, 0x04, 0x16, 0xDC, 0xEB, 0x87, 0x42, 0x80, 0x56,
        0x87, 0xED, 0x03, 0x56, 0xC5, 0x23, 0x8A, 0x99, 0x41, 0x9D, 0x41, 0x05, 0x7F, 0xDC, 0xEA, 0xD0,
        0x9E, 0x9E, 0x80, 0x49, 0x03, 0x03, 0xAB, 0x23, 0xD8, 0xFF, 0x41, 0xD6, 0x41, 0x02, 0xBC, 0x5E,
        0x2D, 0x81, 0x41, 0x03, 0x2D, 0x23, 0x51, 0x81, 0x81, 0x56, 0x87, 0xED, 0x02, 0x8C, 0x5E, 0x33,
        0x99, 0x41, 0x9D, 0x41, 0x05, 0x57, 0xCE, 0x98, 0x5B, 0x9E, 0x9E, 0x80, 0x49, 0x03, 0x08, 0x41,
        0xD4, 0xBF, 0xFF, 0x41, 0xD6, 0x41, 0x03, 0xA5, 0xD9, 0x5E, 0x33, 0x80, 0x41, 0x04, 0xD3, 0x5E,
        0x4B, 0x4E, 0x24, 0x81, 0x56, 0x86, 0xED, 0x02, 0xBD, 0x23, 0xA5, 0x99, 0x41, 0x9D, 0x41, 0x03,
        0xB4, 0x8A, 0x03, 0x49, 0x81, 0x9E, 0x04, 0x49, 0x49, 0x98, 0x2A, 0x63, 0xFF, 0x41, 0xD7, 0x41,
        0x0B, 0x4F, 0x23, 0x57, 0xA5, 0x41, 0x41, 0xB2, 0x23, 0xB8, 0x87, 0x4E, 0x24, 0x80, 0x56, 0x85,
        0xED, 0x02, 0x30, 0x23, 0x0A, 0x9A, 0x41, 0x9D, 0x41, 0x03, 0x57, 0x7F, 0x9A, 0x49, 0x81, 0x9E,
        0x04, 0x49, 0x5B, 0x41, 0x63, 0xBF, 0xFF, 0x41, 0xD7, 0x41, 0x0F, 0xB3, 0x2D, 0x5E, 0xD2, 0xAB,
        0x41, 0xB3, 0x2D, 0x5E, 0x4D, 0xF4, 0x4E, 0x24, 0x42, 0x56, 0x56, 0x83, 0xED, 0x03, 0x95, 0xB0,
        0x5E, 0x33, 0x9A, 0x41, 0x9D, 0x41, 0x03, 0x2A, 0x0A, 0x41, 0xBE, 0x81, 0x9E, 0x04, 0x49, 0xD0,
        0xAC, 0x01, 0x8A, 0xFF, 0x41, 0xD8, 0x41, 0x10, 0x2F, 0x63, 0x5E, 0x5E, 0xDA, 0x11, 0x4F, 0x01,
        0x5E, 0x15, 0xF4, 0x4E, 0x4E, 0x4C, 0x81, 0x56, 0x56, 0x80, 0xED, 0x03, 0x55, 0x8C, 0x23, 0xCD,
        0x9B, 0x41, 0x9D, 0x41, 0x0C, 0x19, 0x5E, 0x4F, 0x9A, 0x08, 0x49, 0x49, 0x9E, 0xBE, 0x93, 0x47,
        0xDC, 0x20, 0xFF, 0x41, 0xD9, 0x41, 0x02, 0xF9, 0xF0, 0x01, 0x82, 0x23, 0x02, 0x5E, 0x4D, 0xA6,
        0x81, 0x4E, 0x07, 0x4C, 0x24, 0x24, 0x15, 0xBD, 0x23, 0xD2, 0xA5, 0x9B, 0x41, 0x9E, 0x41, 0x0B,
        0xE8, 0xD9, 0x2B, 0xB3, 0x03, 0xD0, 0x46, 0xA5, 0xCD, 0x23, 0x9C, 0xB3, 0xFF, 0x41, 0xDB, 0x41,
        0x13, 0xEA, 0xE7, 0x10, 0x47, 0x11, 0x48, 0xDC, 0x5E, 0xE5, 0xC5, 0x15, 0xA6, 0x87, 0x51, 0x4B,
        0x85, 0x5E, 0x23, 0x2A, 0x67, 0x9C, 0x41, 0x9E, 0x41, 0x09, 0xA5, 0xBA, 0x23, 0xD4, 0x7F, 0xDB,
        0xDE, 0x2C, 0xD9, 0x8A, 0xFF, 0x41, 0xE3, 0x41, 0x04, 0x2F, 0xC0, 0x5E, 0xB4, 0xB4, 0x82, 0x5E,
        0x01, 0xAD, 0xD8, 0x9E, 0x41, 0xA0, 0x41, 0x07, 0xE7, 0x47, 0xD4, 0xDC, 0xCA, 0x7F, 0xA2, 0xF9,
        0xFF, 0x41, 0xE5, 0x41, 0x08, 0x33, 0x8A, 0xBF, 0xD2, 0xDC, 0x2D, 0x48, 0x26, 0xF2, 0x9F, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
        0xFF, 0x41, 0x83, 0x41, 0x03, 0x34, 0x80, 0x97, 0x35, 0x87, 0x18, 0x02, 0x05, 0x5A, 0x40, 0xFF,
        0x41, 0xA2, 0x41, 0xFF, 0x41, 0x82, 0x41, 0x01, 0x4A, 0x69, 0x8B, 0x28, 0x02, 0x8D, 0x75, 0xAE,
        0xFF, 0x41, 0xA1, 0x41, 0xFF, 0x41, 0x81, 0x41, 0x02, 0x1E, 0x59, 0x28, 0x8B, 0x8D, 0x03, 0x28,
        0x28, 0x8D, 0xCF, 0xFF, 0x41, 0xA0, 0x41, 0xFF, 0x41, 0x81, 0x41, 0x01, 0x52, 0x28, 0x80, 0x8D,
        0x08, 0x28, 0x8D, 0x28, 0x8D, 0x28, 0x8D, 0x28, 0x8D, 0x28, 0x83, 0x8D, 0x00, 0x43, 0xFF, 0x41,
        0xA0, 0x41, 0xFF, 0x41, 0x81, 0x41, 0x00, 0x12, 0x8D, 0x8D, 0x80, 0x28, 0x01, 0x75, 0x72, 0xFF,
        0x41, 0x9F, 0x41, 0xFF, 0x41, 0x81, 0x41, 0x0F, 0xBB, 0x8D, 0x28, 0x8D, 0x28, 0x8D, 0x53, 0x43,
        0x53, 0x28, 0x28, 0x8D, 0xAF, 0xB6, 0xB6, 0xAF, 0x82, 0x8D, 0x00, 0x7C, 0xFF, 0x41, 0x9F, 0x41,
        0xFF, 0x41, 0x81, 0x41, 0x00, 0xBB, 0x82, 0x8D, 0x09, 0x1D, 0xA5, 0xA9, 0x5C, 0x8D, 0x28, 0x94,
        0x45, 0x00, 0x3B, 0x82, 0x8D, 0x00, 0x8B, 0x84, 0x41, 0x01, 0x20, 0xC4, 0x80, 0x50, 0x02, 0x26,
        0x67, 0xA2, 0x80, 0x41, 0x04, 0xAC, 0x44, 0x50, 0xE6, 0xA2, 0x81, 0x41, 0x11, 0xA2, 0xDD, 0x11,
        0x9C, 0x67, 0xA2, 0x41, 0x41, 0xA2, 0x50, 0x14, 0x41, 0x45, 0xA2, 0x50, 0x26, 0x41, 0x25, 0xF4,
        0x41, 0xFF, 0x41, 0x81, 0x41, 0x02, 0x7B, 0x28, 0x28, 0x80, 0x8D, 0x0F, 0x6C, 0xA9, 0x07, 0x78,
        0x8D, 0x17, 0x99, 0xA5, 0x7A, 0x8D, 0x28, 0x8D, 0x28, 0x8D, 0x8D, 0x8B, 0x84, 0x41, 0x0F, 0xA2,
        0x9B, 0x64, 0x7F, 0xBA, 0xCB, 0xD9, 0x26, 0x45, 0x41, 0x41, 0x20, 0x2C, 0x5E, 0x64, 0x2F, 0x80,
        0x41, 0x11, 0x88, 0xCA, 0x5E, 0x0A, 0x2D, 0x01, 0x11, 0x88, 0x41, 0x9C, 0x5E, 0x10, 0x41, 0x20,
        0xCB, 0x01, 0x9C, 0x2F, 0xF5, 0x41, 0xFF, 0x41, 0x81, 0x41, 0x00, 0x7B, 0x81, 0x8D, 0x10, 0x28,
        0x28, 0x43, 0xEA, 0x25, 0x79, 0x9D, 0xA5, 0x52, 0x28, 0x8D, 0x28, 0x8D, 0x28, 0x8D, 0x8D, 0x8B,
        0x84, 0x41, 0x23, 0xA2, 0x9B, 0x57, 0x2F, 0xA5, 0xF2, 0x5E, 0xBF, 0x88, 0x41, 0x41, 0xA7, 0xD9,
        0x33, 0xDC, 0x8A, 0x45, 0x41, 0x88, 0xCE, 0x5E, 0xD1, 0xA2, 0xA2, 0xB2, 0xE8, 0x41, 0x41, 0x9C,
        0x5E, 0x11, 0xB3, 0x2D, 0xB4, 0x2B, 0x20, 0xF6, 0x41, 0xFF, 0x41, 0x81, 0x41, 0x00, 0x7B, 0x81,
        0x8D, 0x80, 0x28, 0x0D, 0x7D, 0x88, 0x00, 0x41, 0xEA, 0xA8, 0x28, 0x8D, 0x28, 0x8D, 0x28, 0x8D,
        0x8D, 0x8B, 0x84, 0x41, 0x22, 0xA2, 0x9B, 0x2C, 0xA5, 0x25, 0x50, 0x57, 0xBC, 0x41, 0x41, 0x20,
        0xC0, 0x63, 0x41, 0x5D, 0xCA, 0xF1, 0x41, 0x07, 0x57, 0xAD, 0x67, 0x41, 0x41, 0x20, 0xF2, 0x41,
        0x41, 0x9C, 0x5E, 0x47, 0xBF, 0x23, 0x63, 0xD5, 0xF7, 0x41, 0xFF, 0x41, 0x81, 0x41, 0x00, 0x7B,
        0x84, 0x8D, 0x0D, 0x5C, 0xA9, 0xD6, 0x41, 0x43, 0x8D, 0x28, 0x8D, 0x28, 0x8D, 0x28, 0x8D, 0x8D,
        0x8B, 0x84, 0x41, 0x15, 0xF1, 0x9B, 0x5E, 0x63, 0x63, 0xE9, 0xBF, 0x25, 0xA5, 0x41, 0x67, 0x64,
        0x11, 0x45, 0x2B, 0x5E, 0x96, 0x41, 0x20, 0x9B, 0xCB, 0x07, 0x83, 0x41, 0x07, 0x9C, 0x5E, 0x23,
        0xB4, 0x8E, 0x01, 0xBC, 0x45, 0xF6, 0x41, 0xFF, 0x41, 0x81, 0x41, 0x00, 0x7B, 0x85, 0x8D, 0x07,
        0x3E, 0xC6, 0x9D, 0x8D, 0x8D, 0x28, 0x8D, 0x28, 0x81, 0x8D, 0x00, 0x8B, 0x84, 0x41, 0x23, 0xF1,
        0x9B, 0x2C, 0xAC, 0x07, 0xD5, 0x57, 0x63, 0xF1, 0x45, 0x8A, 0x5E, 0xA7, 0x16, 0xBC, 0x23, 0xBA,
        0xF2, 0x07, 0x63, 0x64, 0xAC, 0x41, 0x41, 0xEA, 0x67, 0xA2, 0x41, 0x9C, 0x5E, 0xEB, 0x8A, 0xD6,
        0xB0, 0x0A, 0xA2, 0xF6, 0x41, 0xFF, 0x41, 0x81, 0x41, 0x02, 0x7B, 0x8D, 0x28, 0x83, 0x8D, 0x03,
        0xBB, 0x20, 0x04, 0x5F, 0x85, 0x8D, 0x00, 0x8B, 0x84, 0x41, 0x24, 0xF1, 0x9B, 0x57, 0x67, 0xD5,
        0x88, 0xD4, 0xB4, 0xA5, 0xF1, 0x0A, 0x5E, 0x9B, 0x9B, 0xE5, 0x5E, 0x2C, 0x88, 0x45, 0xB7, 0x23,
        0x26, 0xF1, 0xA2, 0xD3, 0xAD, 0xA2, 0x41, 0x9C, 0x5E, 0xDE, 0x20, 0x20, 0x2A, 0x5E, 0x8A, 0xAC,
        0xF5, 0x41, 0xFF, 0x41, 0x81, 0x41, 0x00, 0x7B, 0x81, 0x8D, 0x00, 0x28, 0x80, 0x8D, 0x04, 0xBB,
        0x88, 0x04, 0x8D, 0x28, 0x84, 0x8D, 0x00, 0x8B, 0x84, 0x41, 0x24, 0xF1, 0x9B, 0xB4, 0xDA, 0x2A,
        0xCB, 0x23, 0x2A, 0x20, 0x96, 0xB4, 0xE8, 0x67, 0xA2, 0x2F, 0x48, 0x5E, 0xE6, 0x41, 0x20, 0x5D,
        0x5E, 0x63, 0xD4, 0x5E, 0xCE, 0xA2, 0x41, 0x9C, 0x5E, 0x11, 0x41, 0x41, 0x07, 0xD9, 0x8E, 0x20,
        0xF5, 0x41, 0xFF, 0x41, 0x81, 0x41, 0x00, 0x7B, 0x81, 0x8D, 0x00, 0x28, 0x80, 0x8D, 0x03, 0xBB,
        0x00, 0x04, 0x28, 0x85, 0x8D, 0x00, 0x8B, 0x84, 0x41, 0x01, 0x20, 0xC4, 0x80, 0x50, 0x06, 0xC4,
        0x14, 0x20, 0xA5, 0xD6, 0x50, 0x20, 0x80, 0x41, 0x16, 0xD5, 0x50, 0xAB, 0x67, 0x41, 0x88, 0xAB,
        0x8A, 0x10, 0xAB, 0xA2, 0x41, 0x41, 0xA2, 0x50, 0xD6, 0x41, 0x41, 0x20, 0xE6, 0x50, 0x14, 0xD5,
        0xF4, 0x41, 0xFF, 0x41, 0x81, 0x41, 0x01, 0xBB, 0x28, 0x80, 0x8D, 0x00, 0x28, 0x80, 0x8D, 0x02,
        0x37, 0x59, 0x29, 0x86, 0x8D, 0x00, 0x7C, 0xFF, 0x41, 0x9F, 0x41, 0xFF, 0x41, 0x81, 0x41, 0x00,
        0x12, 0x81, 0x8D, 0x00, 0x28, 0x80, 0x8D, 0x01, 0x28, 0x28, 0x86, 0x8D, 0x01, 0xA3, 0x72, 0xFF,
        0x41, 0x9F, 0x41, 0xFF, 0x41, 0x81, 0x41, 0x05, 0x52, 0x8D, 0x28, 0x8D, 0x8D, 0x28, 0x8B, 0x8D,
        0x00, 0x43, 0xFF, 0x41, 0xA0, 0x41, 0xFF, 0x41, 0x81, 0x41, 0x05, 0x1E, 0x59, 0x28, 0x8D, 0x8D,
        0x28, 0x8A, 0x8D, 0x01, 0x75, 0xB5, 0xFF, 0x41, 0xA0, 0x41, 0xFF, 0x41, 0x82, 0x41, 0x04, 0x4A,
        0x69, 0x8D, 0x8D, 0x28, 0x89, 0x8D, 0x01, 0x6E, 0x80, 0xFF, 0x41, 0xA1, 0x41, 0xFF, 0x41, 0x83,
        0x41, 0x03, 0x00, 0xAE, 0x97, 0x29, 0x87, 0x02, 0x02, 0xB6, 0x61, 0x2E, 0xFF, 0x41, 0xA2, 0x41,
        0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41,
        0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41,
        0xFF, 0x41, 0xB9, 0x41, 0xFF, 0x41, 0xFF, 0x41, 0xB9, 0x41,
};

// format: compressed 8-bit paletted pixel graphics
// image width: 30 pixels
// image height: 30 lines
// image pitch: 30 bytes

const u16 ConnectedImg_Pal[256] __attribute__((aligned(4))) = {
        0x0000, 0x8000, 0x0400, 0x8400, 0x0010, 0x8010, 0x0410, 0xC618, 0xC6F8, 0xA65E, 0x4100, 0x6100, 0x8100, 0xA100, 0xC100, 0xE100,
        0x0200, 0x2200, 0x4200, 0x6200, 0x8200, 0xA200, 0xC200, 0xE200, 0x0300, 0x2300, 0x4300, 0x6300, 0x8300, 0xA300, 0xC300, 0xE300,
        0x0400, 0x2400, 0x4400, 0x6400, 0x8400, 0xA400, 0xC400, 0xE400, 0x0500, 0x2500, 0x4500, 0x6500, 0x8500, 0xA500, 0xC500, 0xE500,
        0x0600, 0x2600, 0x4600, 0x6600, 0x8600, 0xA600, 0xC600, 0xE600, 0x0700, 0x2700, 0x4700, 0x6700, 0x8700, 0xA700, 0xC700, 0xE700,
        0x0008, 0x2008, 0x4008, 0x6008, 0x8008, 0xA008, 0xC008, 0xE008, 0x0108, 0x2108, 0x4108, 0x6108, 0x8108, 0xA108, 0xC108, 0xE108,
        0x0208, 0x2208, 0x4208, 0x6208, 0x8208, 0xA208, 0xC208, 0xE208, 0x0308, 0x2308, 0x4308, 0x6308, 0x8308, 0xA308, 0xC308, 0xE308,
        0x0408, 0x2408, 0x4408, 0x6408, 0x8408, 0xA408, 0xC408, 0xE408, 0x0508, 0x2508, 0x4508, 0x6508, 0x8508, 0xA508, 0xC508, 0xE508,
        0x0608, 0x2608, 0x4608, 0x6608, 0x8608, 0xA608, 0xC608, 0xE608, 0x0708, 0x2708, 0x4708, 0x6708, 0x8708, 0xA708, 0xC708, 0xE708,
        0x0010, 0x2010, 0x4010, 0x6010, 0x8010, 0xA010, 0xC010, 0xE010, 0x0110, 0x2110, 0x4110, 0x6110, 0x8110, 0xA110, 0xC110, 0xE110,
        0x0210, 0x2210, 0x4210, 0x6210, 0x8210, 0xA210, 0xC210, 0xE210, 0x0310, 0x2310, 0x4310, 0x6310, 0x8310, 0xA310, 0xC310, 0xE310,
        0x0410, 0x2410, 0x4410, 0x6410, 0x8410, 0xA410, 0xC410, 0xE410, 0x0510, 0x2510, 0x4510, 0x6510, 0x8510, 0xA510, 0xC510, 0xE510,
        0x0610, 0x2610, 0x4610, 0x6610, 0x8610, 0xA610, 0xC610, 0xE610, 0x0710, 0x2710, 0x4710, 0x6710, 0x8710, 0xA710, 0xC710, 0xE710,
        0x0018, 0x2018, 0x4018, 0x6018, 0x8018, 0xA018, 0xC018, 0xE018, 0x0118, 0x2118, 0x4118, 0x6118, 0x8118, 0xA118, 0xC118, 0xE118,
        0x0218, 0x2218, 0x4218, 0x6218, 0x8218, 0xA218, 0xC218, 0xE218, 0x0318, 0x2318, 0x4318, 0x6318, 0x8318, 0xA318, 0xC318, 0xE318,
        0x0418, 0x2418, 0x4418, 0x6418, 0x8418, 0xA418, 0xC418, 0xE418, 0x0518, 0x2518, 0x4518, 0x6518, 0x8518, 0xA518, 0xC518, 0xE518,
        0x0618, 0x2618, 0x4618, 0x6618, 0x8618, 0xA618, 0xFFDE, 0xA514, 0x8410, 0xF800, 0x07E0, 0xFFE0, 0x001F, 0xF81F, 0x07FF, 0xFFFF,
};

// C code for the RLE compressed pixel array
const u8 ConnectedImg_RLE[502] __attribute__((aligned(4))) = {
        0x9B, 0x00, 0x9B, 0x00, 0x80, 0x00, 0x80, 0x49, 0x95, 0x00, 0x06, 0x00, 0x00, 0x49, 0xF7, 0xF6,
        0x5B, 0x49, 0x94, 0x00, 0x0F, 0x00, 0x00, 0x49, 0xF6, 0xFF, 0xFF, 0x9B, 0x49, 0x00, 0x49, 0x49,
        0x51, 0x52, 0x49, 0x49, 0x48, 0x8B, 0x00, 0x03, 0x00, 0x00, 0x49, 0x5B, 0x80, 0xFF, 0x09, 0x9B,
        0x52, 0xF7, 0xF6, 0xFF, 0xFF, 0xF6, 0x07, 0x52, 0x49, 0x8A, 0x00, 0x80, 0x00, 0x01, 0x49, 0x9B,
        0x87, 0xFF, 0x02, 0xF6, 0xA4, 0x49, 0x89, 0x00, 0x81, 0x00, 0x01, 0x49, 0x9B, 0x81, 0xFF, 0x03,
        0x07, 0xA4, 0xA4, 0x07, 0x80, 0xFF, 0x03, 0xF7, 0x49, 0x48, 0x49, 0x86, 0x00, 0x81, 0x00, 0x11,
        0x48, 0x52, 0xFF, 0xFF, 0xF6, 0x5B, 0x49, 0x59, 0x59, 0x49, 0x5A, 0xF6, 0xFF, 0xFF, 0xF7, 0x9A,
        0xA4, 0x51, 0x85, 0x00, 0x81, 0x00, 0x05, 0x49, 0xF7, 0xFF, 0xFF, 0x5B, 0x59, 0x81, 0x2A, 0x02,
        0x59, 0x52, 0xF6, 0x81, 0xFF, 0x01, 0xF7, 0x49, 0x84, 0x00, 0x81, 0x00, 0x04, 0x49, 0xF6, 0xFF,
        0x07, 0x51, 0x83, 0x2A, 0x01, 0x59, 0x52, 0x81, 0xFF, 0x01, 0x5A, 0x48, 0x84, 0x00, 0x81, 0x00,
        0x04, 0x51, 0xFF, 0xFF, 0xA4, 0x59, 0x83, 0x2A, 0x01, 0x5A, 0x5A, 0x81, 0xFF, 0x01, 0xF7, 0x49,
        0x84, 0x00, 0x81, 0x00, 0x04, 0x52, 0xFF, 0xFF, 0xA4, 0x59, 0x82, 0x2A, 0x02, 0x5A, 0x5A, 0xF6,
        0x82, 0xFF, 0x01, 0xF7, 0x49, 0x83, 0x00, 0x81, 0x00, 0x04, 0x49, 0xF6, 0xFF, 0x07, 0x51, 0x81,
        0x2A, 0x0B, 0x5A, 0x5B, 0xF6, 0xFF, 0xFF, 0x9B, 0x52, 0xF6, 0xFF, 0xFF, 0xA4, 0x49, 0x82, 0x00,
        0x81, 0x00, 0x15, 0x49, 0x07, 0xFF, 0xFF, 0x9A, 0x5A, 0x2A, 0x2A, 0x5A, 0x5A, 0xF6, 0xFF, 0xFF,
        0x9B, 0x51, 0x59, 0x52, 0xF6, 0xFF, 0xF6, 0x52, 0x48, 0x81, 0x00, 0x81, 0x00, 0x08, 0x48, 0x52,
        0xF6, 0xFF, 0xF6, 0x52, 0x5A, 0x5A, 0x5B, 0x80, 0xFF, 0x09, 0x9B, 0x59, 0x2A, 0x2A, 0x59, 0x9A,
        0xFF, 0xFF, 0x07, 0x51, 0x81, 0x00, 0x82, 0x00, 0x0B, 0x49, 0xA4, 0xFF, 0xFF, 0xF6, 0x52, 0x5B,
        0xF6, 0xFF, 0xFF, 0x9B, 0x51, 0x81, 0x2A, 0x04, 0x51, 0xF5, 0xFF, 0xF6, 0x49, 0x81, 0x00, 0x83,
        0x00, 0x01, 0x49, 0xF7, 0x83, 0xFF, 0x01, 0xA3, 0x51, 0x82, 0x2A, 0x04, 0x19, 0xA4, 0xFF, 0xFF,
        0x52, 0x81, 0x00, 0x84, 0x00, 0x01, 0x49, 0xF7, 0x81, 0xFF, 0x01, 0xA3, 0x51, 0x83, 0x2A, 0x04,
        0x59, 0xA4, 0xFF, 0xFF, 0x52, 0x81, 0x00, 0x84, 0x00, 0x01, 0x48, 0x9A, 0x81, 0xFF, 0x01, 0x52,
        0x5A, 0x83, 0x2A, 0x04, 0x51, 0x07, 0xFF, 0xFF, 0x49, 0x81, 0x00, 0x84, 0x00, 0x01, 0x49, 0xF7,
        0x81, 0xFF, 0x02, 0xF6, 0x52, 0x5A, 0x81, 0x2A, 0x05, 0x59, 0x5A, 0xFF, 0xFF, 0xF5, 0x49, 0x81,
        0x00, 0x85, 0x00, 0x11, 0x51, 0xF7, 0x5A, 0xF7, 0xFF, 0xFF, 0xF6, 0x9A, 0x51, 0x59, 0x59, 0x51,
        0x5A, 0xF6, 0xFF, 0xFF, 0x52, 0x48, 0x81, 0x00, 0x85, 0x00, 0x04, 0x48, 0x49, 0x48, 0x49, 0xF7,
        0x80, 0xFF, 0x03, 0x07, 0xA4, 0xA4, 0x07, 0x81, 0xFF, 0x01, 0x9B, 0x49, 0x81, 0x00, 0x89, 0x00,
        0x02, 0x49, 0xA4, 0xF6, 0x87, 0xFF, 0x01, 0x5B, 0x49, 0x80, 0x00, 0x8A, 0x00, 0x03, 0x49, 0x52,
        0x07, 0xF6, 0x80, 0xFF, 0x02, 0xF5, 0x52, 0x9B, 0x80, 0xFF, 0x03, 0x5B, 0x49, 0x00, 0x00, 0x8B,
        0x00, 0x0F, 0x48, 0x51, 0x49, 0x52, 0x52, 0x49, 0x49, 0x48, 0x49, 0x9B, 0xFF, 0xFF, 0xF6, 0x49,
        0x00, 0x00, 0x94, 0x00, 0x06, 0x49, 0x5B, 0xF6, 0xF7, 0x49, 0x00, 0x00, 0x95, 0x00, 0x80, 0x49,
        0x80, 0x00, 0x9B, 0x00, 0x9B, 0x00,
};

const u16 DconnectedImg_Pal[256] __attribute__((aligned(4))) = {
        0x0020, 0xCE59, 0x94B2, 0x94B2, 0x31A6, 0x2124, 0x738E, 0xEF5D, 0x6B6D, 0x3186, 0xBDF7, 0xFFDF, 0xAD75, 0x2104, 0xCE59, 0x0020,
        0xEF7D, 0xC638, 0xC618, 0x528A, 0xE71C, 0xF7BE, 0xFFFF, 0xBDF7, 0xE73C, 0xD69A, 0x20E3, 0x0000, 0x0820, 0x5269, 0xC638, 0xE71C,
        0xE73C, 0x8410, 0x1020, 0x9904, 0xD965, 0xC945, 0x60A2, 0x18A2, 0xEF7D, 0xBDD7, 0x5AEB, 0x3145, 0x4861, 0xD965, 0xD965, 0x58A2,
        0x62CB, 0x0861, 0x0841, 0x6B4D, 0x5082, 0xB924, 0x1882, 0x1082, 0x20C3, 0x5882, 0xC145, 0x1041, 0xF7BE, 0x4208, 0x2124, 0xAD55,
        0x5882, 0x78C3, 0x41E7, 0x10A2, 0x1082, 0x8430, 0xEF5D, 0x4A49, 0x20C3, 0x4061, 0xDEDB, 0x0861, 0xB596, 0x8430, 0x41E7, 0xB5B6,
        0xF79E, 0x632C, 0xCE79, 0x10A2, 0x0000, 0x18C3, 0x8C51, 0x39A6, 0x18C3, 0x0841, 0x1061, 0x5082, 0x1882, 0x18E3, 0x4228, 0x5ACB,
        0x5882, 0x80C3, 0xDEDB, 0x8410, 0x2904, 0xA904, 0x78C3, 0xFFFF, 0x3145, 0xA104, 0x78C3, 0x1882, 0xDEFB, 0xBDD7, 0x39E7, 0x83EF,
        0x3061, 0x70A2, 0x4061, 0xC124, 0xA104, 0x1841, 0x6B4D, 0x6B2C, 0x20C3, 0xA514, 0xFFDF, 0xCE79, 0x18E3, 0x5ACB, 0x8C71, 0x0000,
        0x7BCF, 0x2945,
};

// C code for the RLE compressed pixel array
const u8 DconnectedImg_RLE[509] __attribute__((aligned(4))) = {
        0x9B, 0x7F, 0x9B, 0x7F, 0x95, 0x7F, 0x05, 0x00, 0x02, 0x01, 0x04, 0x7F, 0x7F, 0x8E, 0x7F, 0x0C,
        0x05, 0x06, 0x03, 0x08, 0x09, 0x7F, 0x00, 0x0A, 0x0B, 0x67, 0x01, 0x7F, 0x7F, 0x8C, 0x7F, 0x0E,
        0x0D, 0x0E, 0x46, 0x16, 0x67, 0x67, 0x10, 0x11, 0x12, 0x0B, 0x16, 0x0B, 0x02, 0x7F, 0x7F, 0x8B,
        0x7F, 0x0F, 0x13, 0x14, 0x16, 0x16, 0x67, 0x15, 0x0B, 0x16, 0x16, 0x0B, 0x16, 0x0B, 0x17, 0x00,
        0x7F, 0x7F, 0x8A, 0x7F, 0x0D, 0x13, 0x20, 0x16, 0x16, 0x0C, 0x1A, 0x1B, 0x1C, 0x1D, 0x46, 0x16,
        0x67, 0x1E, 0x0F, 0x80, 0x7F, 0x89, 0x7F, 0x0D, 0x0D, 0x20, 0x67, 0x67, 0x21, 0x22, 0x23, 0x24,
        0x25, 0x60, 0x6B, 0x10, 0x67, 0x29, 0x81, 0x7F, 0x89, 0x7F, 0x0E, 0x2A, 0x0B, 0x67, 0x16, 0x2B,
        0x2C, 0x2D, 0x2D, 0x24, 0x24, 0x39, 0x30, 0x67, 0x14, 0x4B, 0x80, 0x7F, 0x89, 0x7F, 0x0E, 0x32,
        0x19, 0x16, 0x67, 0x14, 0x1A, 0x5B, 0x24, 0x24, 0x2E, 0x35, 0x5C, 0x16, 0x28, 0x04, 0x80, 0x7F,
        0x8A, 0x7F, 0x0D, 0x37, 0x19, 0x16, 0x67, 0x14, 0x48, 0x39, 0x24, 0x24, 0x3A, 0x22, 0x16, 0x3C,
        0x3D, 0x80, 0x7F, 0x89, 0x7F, 0x0E, 0x3E, 0x0D, 0x44, 0x19, 0x16, 0x16, 0x1F, 0x78, 0x39, 0x24,
        0x41, 0x42, 0x0B, 0x14, 0x44, 0x80, 0x7F, 0x85, 0x7F, 0x11, 0x44, 0x7F, 0x7F, 0x45, 0x18, 0x46,
        0x47, 0x44, 0x19, 0x16, 0x16, 0x6C, 0x27, 0x72, 0x1C, 0x4A, 0x16, 0x4A, 0x81, 0x7F, 0x83, 0x7F,
        0x13, 0x4B, 0x12, 0x14, 0x4C, 0x45, 0x10, 0x16, 0x16, 0x45, 0x7F, 0x37, 0x19, 0x16, 0x67, 0x6C,
        0x42, 0x4C, 0x16, 0x28, 0x77, 0x81, 0x7F, 0x82, 0x7F, 0x13, 0x4B, 0x52, 0x16, 0x67, 0x0B, 0x50,
        0x16, 0x67, 0x4A, 0x53, 0x7F, 0x7F, 0x44, 0x19, 0x16, 0x16, 0x67, 0x16, 0x16, 0x0A, 0x82, 0x7F,
        0x81, 0x7F, 0x04, 0x54, 0x1E, 0x16, 0x67, 0x67, 0x80, 0x16, 0x0C, 0x4A, 0x55, 0x7F, 0x53, 0x56,
        0x47, 0x44, 0x19, 0x16, 0x67, 0x0B, 0x11, 0x59, 0x82, 0x7F, 0x81, 0x7F, 0x13, 0x56, 0x15, 0x67,
        0x1E, 0x57, 0x4A, 0x67, 0x16, 0x17, 0x00, 0x58, 0x4A, 0x16, 0x46, 0x0D, 0x37, 0x01, 0x20, 0x0A,
        0x32, 0x83, 0x7F, 0x80, 0x7F, 0x12, 0x0F, 0x1F, 0x16, 0x18, 0x3B, 0x5B, 0x37, 0x4A, 0x16, 0x7A,
        0x0A, 0x4A, 0x16, 0x16, 0x18, 0x0D, 0x7F, 0x7F, 0x5D, 0x85, 0x7F, 0x80, 0x7F, 0x08, 0x5E, 0x15,
        0x16, 0x5F, 0x40, 0x2D, 0x6A, 0x5C, 0x4A, 0x81, 0x16, 0x01, 0x10, 0x45, 0x89, 0x7F, 0x80, 0x7F,
        0x0D, 0x6F, 0x16, 0x16, 0x64, 0x65, 0x24, 0x2D, 0x6A, 0x37, 0x62, 0x16, 0x16, 0x28, 0x4D, 0x8A,
        0x7F, 0x80, 0x7F, 0x0D, 0x33, 0x16, 0x16, 0x2B, 0x23, 0x24, 0x24, 0x2D, 0x6A, 0x5C, 0x62, 0x16,
        0x0B, 0x6D, 0x8A, 0x7F, 0x80, 0x7F, 0x04, 0x6E, 0x50, 0x16, 0x6F, 0x70, 0x81, 0x24, 0x05, 0x71,
        0x53, 0x0B, 0x16, 0x10, 0x04, 0x89, 0x7F, 0x81, 0x7F, 0x0D, 0x19, 0x16, 0x7A, 0x2B, 0x72, 0x73,
        0x24, 0x69, 0x75, 0x77, 0x16, 0x67, 0x1F, 0x31, 0x89, 0x7F, 0x80, 0x7F, 0x0D, 0x00, 0x1E, 0x16,
        0x16, 0x15, 0x2A, 0x22, 0x7F, 0x27, 0x79, 0x16, 0x16, 0x20, 0x3D, 0x8A, 0x7F, 0x04, 0x7F, 0x7F,
        0x00, 0x29, 0x7A, 0x82, 0x16, 0x00, 0x7A, 0x80, 0x16, 0x01, 0x1F, 0x5E, 0x8B, 0x7F, 0x08, 0x7F,
        0x7F, 0x02, 0x7A, 0x16, 0x0B, 0x52, 0x4A, 0x3C, 0x80, 0x67, 0x02, 0x07, 0x1E, 0x7C, 0x8C, 0x7F,
        0x0C, 0x7F, 0x7F, 0x11, 0x16, 0x0B, 0x29, 0x00, 0x54, 0x7D, 0x7E, 0x3F, 0x80, 0x81, 0x8E, 0x7F,
        0x05, 0x7F, 0x7F, 0x82, 0x11, 0x02, 0x00, 0x95, 0x7F, 0x9B, 0x7F, 0x9B, 0x7F,
};