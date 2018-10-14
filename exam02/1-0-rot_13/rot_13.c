/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:14:41 by exam              #+#    #+#             */
/*   Updated: 2018/10/05 18:26:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			ft_putchar((*str - 'a' + 13) % 26 + 'a');
		else if (*str >= 'A' && *str <= 'Z')
			ft_putchar((*str - 'A' + 13) % 26 + 'A');
		else
			ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	rot_13(argv[1]);
	ft_putchar('\n');
	return (0);
}
