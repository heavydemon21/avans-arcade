#pragma once
#include <stdint.h>
// #include <math.h>

typedef struct {
	int32_t x,y;
} vec2;

typedef vec2 vec_cen;//centered
typedef vec2 vec_cor;//left upper corner

vec2 vec_add(vec2 a, vec2 b);

vec_cor vec_cen2cor(vec_cen in, vec2 halfDistance);
vec_cor vec_cor2cen(vec_cen in, vec2 halfDistance);

//fixed point at decimal 7lsb (world positions in pixels (with fixed decimal point))
#define HH_MATH_FIXED_POINT 7

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))
#define CLAMP(N,LOWER,UPPER) (MIN(MAX(LOWER, N), UPPER))
