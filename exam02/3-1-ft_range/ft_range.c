/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 19:08:11 by exam              #+#    #+#             */
/*   Updated: 2018/10/05 19:15:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int *arr = (int *)malloc((end - start) * sizeof(int));
	int i = start;

	while (i <= end)
	{
		arr[i - start] = i;
		i++;
	}
	return (arr);
}
