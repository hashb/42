/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashb <hashb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 20:41:49 by hashb             #+#    #+#             */
/*   Updated: 2018/10/02 20:49:35 by hashb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char))
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (tab[i])
    {
        if ((*f)(tab[i]) == 1)
            count++;
        i++;
    }
    return (count);
}