#include "Tables.hpp"

const int32 g_table[8][4] = {
    {  2,  8,   -2,   -8 },
    {  5, 17,   -5,  -17 },
    {  9, 29,   -9,  -29 },
    { 13, 42,  -13,  -42 },
    { 18, 60,  -18,  -60 },
    { 24, 80,  -24,  -80 },
    { 33, 106, -33, -106 },
    { 47, 183, -47, -183 }
};

const int32 g_table256[8][4] = {
    {  2*256,  8*256,   -2*256,   -8*256 },
    {  5*256, 17*256,   -5*256,  -17*256 },
    {  9*256, 29*256,   -9*256,  -29*256 },
    { 13*256, 42*256,  -13*256,  -42*256 },
    { 18*256, 60*256,  -18*256,  -60*256 },
    { 24*256, 80*256,  -24*256,  -80*256 },
    { 33*256, 106*256, -33*256, -106*256 },
    { 47*256, 183*256, -47*256, -183*256 }
};

const uint32 g_id[4][16] = {
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 3, 3, 2, 2, 3, 3, 2, 2, 3, 3, 2, 2, 3, 3, 2, 2 },
    { 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4 },
    { 7, 7, 6, 6, 7, 7, 6, 6, 7, 7, 6, 6, 7, 7, 6, 6 }
};

extern const uint32 g_avg2[16] = {
    0x00,
    0x11,
    0x22,
    0x33,
    0x44,
    0x55,
    0x66,
    0x77,
    0x88,
    0x99,
    0xAA,
    0xBB,
    0xCC,
    0xDD,
    0xEE,
    0xFF
};
