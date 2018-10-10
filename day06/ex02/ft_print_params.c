/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 19:26:39 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/26 19:42:17 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_param(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		main(int argc, char *argv[])
{
	int i;
	char *str;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			str = argv[i];
			ft_print_param(str);
			i++;
		}
	}
	return (0);
}
