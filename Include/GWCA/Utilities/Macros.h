#pragma once

#define ArrayCount(array) (sizeof(array) / sizeof((array)[0]))
#define Verify(expr) (expr)

#define DECODE_RELATIVE(expr) ((uintptr_t)(expr) + *(uintptr_t*)(expr) + 4)

#define BIT_SET(var, data)       ((var) |=  (data))
#define BIT_UNSET(var, data)     ((var) &= ~(data))
#define BIT_TOGGLE(var, data)    ((var) ^=  (data))

#define BIT_CHECKANY(var, data) (((var) &   (data)) > 0)
#define BIT_CHECKALL(var, data) (((var) &   (data)) == (data))
