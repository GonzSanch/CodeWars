#include <stdbool.h>

bool xo (const char* str)
{
    int countx;
    int counto;
    int i;

    i = 0;
    counto = 0;
    countx = 0;
    while (str[i])
    {
        if (str[i] == 'x' || str[i] == 'X')
            countx++;
        else if (str[i] == 'o' || str[i] == 'O')
            counto++;
        i++;
    }
    return  (counto == countx ? true : false);

}
