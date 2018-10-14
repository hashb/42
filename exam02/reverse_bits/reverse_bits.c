/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:31:03 by exam              #+#    #+#             */
/*   Updated: 2018/10/05 18:42:22 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char rev = 0;
	int count = 8;

	while (count)
	{
		rev = (rev << 1) | (octet & 1);
		octet = octet >> 1;
		count--;
	}
	return (rev);
}
