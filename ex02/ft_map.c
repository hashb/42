/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashb <hashb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 20:27:58 by hashb             #+#    #+#             */
/*   Updated: 2018/10/02 20:48:33 by hashb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_map(int *tab, int length, int (*f)(int))
{
    int i;
    int *ret;

    i = 0;
    ret = (int *)malloc(length * sizeof(int));
    while (i < length)
    {
        ret[i] = (*f)(tab[i]);
        i++;
    }
    return (ret);
}