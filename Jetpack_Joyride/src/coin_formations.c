#include <stdint.h>

//global maximum coins, technically redundant but still useful for debugging:
#define MaxCoins 30

#define COIN_FORMATIONS 6

//the max number of coins in each shape, used so the coin-calculation runs through the minimum
//number of coins:
const uint8_t coin_max[COIN_FORMATIONS] =
{
    30,
    21,
    24,
    26,
    17,
    30
};

//coin formation type arrays:
const uint24_t ctx[COIN_FORMATIONS][MaxCoins] =
{{
    0, 12, 24, 36, 48, 60, 72, 84, 96, 108,
    0, 12, 24, 36, 48, 60, 72, 84, 96, 108,
    0, 12, 24, 36, 48, 60, 72, 84, 96, 108
},{
    0,     24,   48, 60,
    0,     24,   48,     72,
    0, 12, 24,   48, 60,
    0,     24,   48,     72,
    0,     24,   48, 60
},{
    0, 12,             72, 84,               144, 156,
    0, 12,   36, 48,   72, 84,   108, 120,   144, 156,   180, 192,
             36, 48,             108, 120,               180, 192
},{
                               84,
                               84, 96,
    0, 12, 24, 36, 48, 60, 72, 84, 96, 108,
    0, 12, 24, 36, 48, 60, 72, 84, 96, 108,
                               84, 96,
                               84
},{
           24,
       12, 24, 36, 48,
    0,     24,
       12, 24, 36,
           24,     48,
    0, 12, 24, 36,
           24
},{
    0,     24,     48,     72,     96,
       12,     36,     60,     84,     108,
    0,     24,     48,     72,     96,
       12,     36,     60,     84,     108,
    0,     24,     48,     72,     96,
       12,     36,     60,     84,     108,
}};

const uint8_t cty[COIN_FORMATIONS][MaxCoins] =
{{
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
    24, 24, 24, 24, 24, 24, 24, 24, 24, 24
},{
    0,      0,    0,  0,
    12,     12,   12,    12,
    24, 24, 24,   24, 24,
    36,     36,   36,    36,
    48,     48,   48, 48
},{
    0,  0,              0,  0,              0,  0,
    12, 12,   12, 12,   12, 12,   12, 12,   12, 12,   12, 12,
              24, 24,             24, 24,             24, 24
},{
                                0,
                                12, 12,
    24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
    36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
                                48, 48,
                                60
},{
            0,
        12, 12, 12, 12,
    24,     24,
        36, 36, 36,
            48,     48,
    60, 60, 60, 60,
            72,
},{
    0,      0 ,     0 ,     0 ,     0 ,
        12,     12,     12,     12,     12,
    24,     24,     24,     24,     24,
        36,     36,     36,     36,     36,
    48,     48,     48,     48,     48,
        60,     60,     60,     60,     60
}};