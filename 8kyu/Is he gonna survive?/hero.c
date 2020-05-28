#include <stdbool.h>
#include <stdint.h>

bool hero(uint32_t bullets, uint32_t dragons)
{
    if ((dragons * 2) <= bullets)
        return true;
    else
        return false;
}
