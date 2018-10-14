/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 19:16:50 by exam              #+#    #+#             */
/*   Updated: 2018/09/28 19:26:32 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	do_op(int a, char c, int b)
{
	if (c == '*')
		printf("%i\n", a * b);
	if (c == '-')
		printf("%i\n", a - b);
	if (c == '+')
		printf("%i\n", a + b);
	if (c == '/')
		printf("%i\n", a / b);
	if (c == '%')
		printf("%i\n", a % b);
}

int		main(int argc, char **argv)
{
	char	c;
	int		a;
	int		b;

	if (argc != 4)
	{
		printf("\n");
		return (0);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = argv[2][0];
	do_op(a, c, b);
	return (0);
}
