/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 19:26:34 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/26 19:33:03 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	char *str;

	if (argc >= 1)
	{
		str = argv[0];
		while (*str)
		{
			ft_putchar(*str);
			str++;
		}
		ft_putchar('\n');
	}
	return 0;
}
