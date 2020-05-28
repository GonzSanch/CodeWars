#include <string.h>
#include <stdlib.h>

char *repeat_str(size_t count, const char *src)
{
    int i;
    char *aux;
    if (count == 0)
        return NULL;
    if (!(aux = malloc(sizeof(char) * (strlen(src) * count + count))))
        return NULL;
    strcpy(aux, src);
    while (--count > 0)
        strcat(aux, src);
    return (aux);
}
