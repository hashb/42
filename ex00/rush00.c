/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 11:17:40 by eubotnar          #+#    #+#             */
/*   Updated: 2018/09/23 20:49:04 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	down(int i, int w, int h)
{
	if (i > w && i <= w * (h - 1))
		ft_putchar('|');
	else
		ft_putchar('o');
}

void	side(int i, int w, int h)
{
	if (i > 1 && i < w)
		ft_putchar('-');
	else if (i >= w * h - w + 1 && i < w * h)
		ft_putchar('-');
	else
		ft_putchar(' ');
}

void	rush(int w, int h)
{
	int i;

	i = 1;
	while (i <= w * h && (w > 0 || h > 0))
	{
		if (i % w == 0 || i % w == 1 || i == 1)
		{
			down(i, w, h);
		}
		else
		{
			side(i, w, h);
		}
		if (i % w == 0)
			ft_putchar('\n');
		i++;
	}
}
