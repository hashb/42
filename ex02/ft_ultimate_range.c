/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 20:53:25 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/27 15:02:18 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min > max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int*)malloc(sizeof(int) * (max - min));
	if (!*range)
	{
		*range = NULL;
		return (0);
	}
	i = min;
	while (i < max)
	{
		range[0][i - min] = i;
		i++;
	}
	return (i - min);
}
