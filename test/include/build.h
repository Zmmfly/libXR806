#ifndef __TEST_BUILD_H__
#define __TEST_BUILD_H__

#include <stdint.h>
#include <stdbool.h>

#define tufn(name)  bool (tu_##name)(uint32_t *next_arg)

typedef bool (*tufn_t)(uint32_t *next_arg);

typedef struct tu_item
{
    const char *name;
    tufn_t fn;
}tu_item;

extern tu_item tu_items[];

#define t(name) tufn(name);
#include "test_def"
#undef t

#endif