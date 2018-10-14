#include <stdlib.h>

char    *ft_itoa(int nbr)
{
    char *str = (char *)malloc(20 * sizeof(char));
    int i = 0;
    while (i < 20)
    {
        str[i] = ' ';
        i++;
    }
    int sign;
    if (nbr >= 0)
        sign = 1;
    else {
        sign = -1;
        nbr = -1 * nbr;
    }
    i = 18;
    str[19] = '\0';
    while (nbr)
    {
        str[i] = nbr % 10 + '0';
        nbr = nbr / 10;
        i--;
    }
    if (sign == -1)
        str[i] = '-';
    while (*str == ' ')
        str++;
    return str;
}
