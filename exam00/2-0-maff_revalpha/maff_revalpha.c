/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 18:44:00 by exam              #+#    #+#             */
/*   Updated: 2018/09/21 18:57:21 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_revalpha(void)
{
	char alpha1, alpha2;
	int count;

	count = 0;
	alpha1 = 'z';
	alpha2 = 'Z';
	while(count <= ('z' - 'a'))
	{
		if(count % 2 == 0)
		{
			ft_putchar(alpha1);
		}
		else
		{
			ft_putchar(alpha2);
		}
		count++;
		alpha1--;
		alpha2--;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_revalpha();
	return (0);
}

