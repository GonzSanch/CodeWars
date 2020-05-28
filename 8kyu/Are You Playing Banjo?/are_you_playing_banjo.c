#include <string.h>
#include <stdlib.h>

char* are_you_playing_banjo(const char* name) {
    char *str;

    if (*name == 'R' || *name == 'r')
    {
        str = malloc(sizeof(char) * (strlen(name) + 12));
        strcpy(str, name);
        strcat(str, " plays banjo");
    }
    else
    {
        str = malloc(sizeof(char) * (strlen(name) + 20));
        strcpy(str, name);
        strcat(str, " does not play banjo");
    }
    return (str);
}
