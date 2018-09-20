/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <42@chenna.me>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 13:11:51 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/19 16:12:18 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet < ('z' + 1))
	{
		ft_putchar(alphabet);
		alphabet += 1;
	}
}
