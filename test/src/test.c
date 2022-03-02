#include "build.h"
#include <stdio.h>

#define t(name) { #name, tu_##name},
tu_item tu_items[] = {
    #include "test_def"
};
#undef t


void test_run()
{
    tu_item  *item    = NULL;
    bool     ret      = false;
    uint32_t next_arg = 0;
    for (size_t i = 0; i < sizeof(tu_items) / sizeof(tu_items[0]); i++)
    {
        item = &tu_items[i];
        ret = item->fn(&next_arg);
        printf("No.%04u, %-30s: %s\n", i, item->name, ret ? "\033[32mPASS\033[0m" : "\033[31mFAIL\033[0m");
    }
}