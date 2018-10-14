/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 18:11:09 by exam              #+#    #+#             */
/*   Updated: 2018/09/28 18:18:40 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	char *str;

	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}

	str = argv[argc - 1];

	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
	return (0);
}
