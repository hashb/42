/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 16:45:43 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/25 21:36:18 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int unb;

	if (nb < 0)
	{
		unb = -1 * nb;
		ft_putchar('-');
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
