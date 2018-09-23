/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 11:17:40 by eubotnar          #+#    #+#             */
/*   Updated: 2018/09/23 11:20:01 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void    rush(int w, int h)
{
    int i;

    i = 1;
    while (i <= w * h && (w > 0 || h > 0))
    {
        if (i % w == 0 || i % w == 1 || i == 1)
        {
            if (i > w && i <= w * (h - 1))
                ft_putchar('|');
            else
                ft_putchar('o');
        }
        else
        {
            if (i > 1 && i < w)
                ft_putchar('-');
            else if (i >= w * h - w + 1 && i < w * h)
                ft_putchar('-');
            else
                ft_putchar(' ');
        }
        if (i % w == 0)
            ft_putchar('\n');
        i++;
    }
}
