#include <string.h>

const char* greet(const char *name, const char *owner)
{
    if (strcmp(name, owner) == 0)
        return "Hello boss";
    return "Hello guest";
}
