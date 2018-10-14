/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:43:57 by exam              #+#    #+#             */
/*   Updated: 2018/10/05 19:05:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;

	}
}

void	to_lower(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
} 

void	capitalizer(char *str)
{
	char *orig = str;
	to_lower(str);
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	str++;
	while (*str)
	{
		if (*str == ' ' || *str == '\t')
		{
			str++;
			if (*str >= 'a' && *str <= 'z')
				*str -= 32;
		}
		else
			str++;
	}
	ft_putstr(orig);
}

int		main(int argc, char **argv)
{
	int i = 1;

	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (i < argc)
	{
		capitalizer(argv[i]);
		if (i != argc)
			ft_putchar('\n');
		i++;
	}
	return (0);
}

