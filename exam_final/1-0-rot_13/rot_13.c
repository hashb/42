#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}

void    ft_rot13(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            ft_putchar((*str - 'a' + 13) % 26 + 'a');
        else if (*str >= 'A' && *str <= 'Z')
            ft_putchar((*str - 'a' + 13) % 26 + 'a');
        else
            ft_putchar(*str);
        str++;
    }
}

int     main(int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return (0);
    }
    ft_rot13(argv[1]);
    ft_putchar('\n');
    return (0);
}