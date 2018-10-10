/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 20:53:27 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/27 14:17:42 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *res;
	int i;

	if (min > max)
		return (NULL);
	res = (int *)malloc(sizeof(min) * (max - min));
	i = min;
	while (i < max)
	{
		res[i - min] = i;
		i++;
	}
	return (res);
}
