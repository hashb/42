/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 19:26:48 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/26 20:35:04 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

void	ft_print_param(int argc, char *arr[])
{
	int i;
	char *str;

	i = 1;
	while (i < argc)
	{
		str = arr[i];
		while (*str)
		{
			ft_putchar(*str);
			str++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_sort_params(int argc, char *arr[])
{
	int i;
	int j;
	char *tmp;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(arr[i], arr[j]) > 0)
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
	ft_print_param(argc, arr);
}

int		main(int argc, char *argv[])
{
	if (argc > 1)
	{
		ft_sort_params(argc, argv);
	}
	return (0);
}
