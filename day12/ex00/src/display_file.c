/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashb <hashb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 21:46:23 by hashb             #+#    #+#             */
/*   Updated: 2018/10/04 21:58:40 by hashb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void		ft_process_stuff(char *name)
{
	int		file;
	char	ch;

	file = open(name, O_RDONLY);
	while (read(file, &ch, 1))
		write(1, &ch, 1);
	close(file);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
		ft_process_stuff(argv[1]);
}
