/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 20:13:38 by exam              #+#    #+#             */
/*   Updated: 2018/09/28 20:46:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;
	int					tmp;
	int a;
	int b;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i+1;
		while (j < size)
		{
			a = tab[i];
			b = tab[j];
			if (a > b)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
