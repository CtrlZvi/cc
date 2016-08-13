#define LINMATH_H_DEFINE_VEC(n) \
typedef float vec##n[n];

LINMATH_H_DEFINE_VEC(4)

typedef vec4 mat4x4[4];

mat4x4 foo;
