/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 19:30:54 by exam              #+#    #+#             */
/*   Updated: 2018/09/28 20:10:41 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int unb;

	if (nb < 0)
	{
		ft_putchar('-');
		unb = nb;
	}
	else
		unb = nb;
	if (unb >= 10)
	{
		ft_putnbr(unb / 10);
		ft_putnbr(unb % 10);
	}
	else
		ft_putchar(unb + '0');
}

int		ft_atoi(char *str)
{
	int nbr;

	if (*str == '+')
		str++;
	nbr = 0;
	while (*str)
	{
		nbr = (nbr * 10) + (*str - '0');
		str++;
	}
	return (nbr);
}

void	ft_printstuff(int num)
{
	int i;

	i = 1;
	while (i <= 9)
	{
		ft_putchar('0' + i);
		ft_putchar(' ');
		ft_putchar('x');
		ft_putchar(' ');
		ft_putnbr(num);
		ft_putchar(' ');
		ft_putchar('=');
		ft_putchar(' ');
		ft_putnbr(num * i);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int nbr;

	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	nbr = ft_atoi(argv[1]);
	ft_printstuff(nbr);
	return (0);
}

