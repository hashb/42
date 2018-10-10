/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 19:26:44 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/26 19:46:28 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_rev_param(char *str)
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
		i = argc - 1;
		while (i > 0)
		{
			str = argv[i];
			ft_rev_param(str);
			i--;
		}
	}
	return (0);
}
