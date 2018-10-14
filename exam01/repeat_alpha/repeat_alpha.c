/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 19:04:20 by exam              #+#    #+#             */
/*   Updated: 2018/09/28 19:13:21 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_get_index(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 1);
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	return (1);
}

int		main(int argc, char **argv)
{
	char *str;
	int i;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	str = argv[1];
	while (*str)
	{
		i = ft_get_index(*str);
		while (i)
		{
			ft_putchar(*str);
			i--;
		}
		str++;
	}
	ft_putchar('\n');
	return (0);
}
