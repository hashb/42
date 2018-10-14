/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 21:00:09 by exam              #+#    #+#             */
/*   Updated: 2018/09/28 21:09:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_memory(const void *addr, size_t size)
{
	printf("%X ,%zu", addr, size);
}

int		main(void)
{
    int tab[10] = {0, 23, 150, 255,
                  12, 16,  42, 103};

    print_memory(tab, sizeof(tab));
    return (0);
}
