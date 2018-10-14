#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_atoi(char *str)
{
    unsigned int res = 0;

    while (*str == '\n' || *str == '\t'
           || *str == '\v' || *str == '\f' || *str == '\r')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        res = (res * 10) + *str - '0';
        str++;
    }
    return (res);
}

void    ft_print_hex(int num)
{
    char *str = "0123456789abcdef";
    if (num < 16)
    {
        ft_putchar(str[num]);
        return ;
    }
    else
    {
        int a = num  % 16;
        ft_print_hex(num / 16);
        ft_putchar(str[a]);
    }
}

int     main(int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return (0);
    }
    ft_print_hex(ft_atoi(argv[1]));
    ft_putchar('\n');
    return (0);
}