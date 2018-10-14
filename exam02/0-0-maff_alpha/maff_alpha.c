/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:04:24 by exam              #+#    #+#             */
/*   Updated: 2018/10/05 18:12:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char a1 = 'a';
	char a2 = 'A';
	int count = 1;

	while (a1 <= 'z')
	{
		if (count % 2 == 0)
			ft_putchar(a2);
		else
			ft_putchar(a1);
		a1++;
		a2++;
		count++;
	}
	ft_putchar('\n');
	return (0);
}
