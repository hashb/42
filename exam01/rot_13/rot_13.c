/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 18:35:29 by exam              #+#    #+#             */
/*   Updated: 2018/09/28 19:00:20 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rotshit(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		ft_putchar('A' + ((c - 'A' + 13) % 26));
		return ;
	}
	if (c >= 'a' && c <= 'z')
	{
		ft_putchar('a' + ((c - 'a' + 13) % 26));
		return ;
	}
	ft_putchar(c);
}

int		main(int argc, char **argv)
{
	char *str;

	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	str = argv[1];
	while (*str)
	{
		ft_rotshit(*str);
		str++;
	}
	ft_putchar('\n');
	return (0);
}
