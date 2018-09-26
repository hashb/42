/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 16:45:43 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/25 20:36:35 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr(int nb);

void	ft_putnbr_spl(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	ft_putchar('2');
	ft_putnbr(147483647);
	return ;
}

void	ft_putnbr(int nb)
{
	if (nb == -__INT_MAX__ || nb == __INT_MAX__)
	{
		ft_putnbr_spl(nb);
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}
