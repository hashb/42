/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 19:18:12 by exam              #+#    #+#             */
/*   Updated: 2018/10/05 19:36:07 by exam             ###   ########.fr       */
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

int		ft_length(char *str)
{
	int i = -1;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

void	capitalizer(char *str)
{
	int len = ft_length(str);
	to_lower(str);

	if (str[len] >= 'a' && str[len] <= 'z')
	{
		str[len] -= 32;
		len--;
	}
	while (len)
	{
		if (str[len] == ' ' || str[len] == '\t')
		{
			if (str[len-1] >= 'a' && str[len-1] <= 'z')
				str[len-1] -= 32;
			len--;
		}
		else
			len--;
	}
	ft_putstr(str);
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
