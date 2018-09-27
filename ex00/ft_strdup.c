/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 20:53:09 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/27 12:29:38 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;

	len = 0;
	while (src[len])
		len++;
	dest = (char *)malloc(sizeof(*src) * (len + 1));
	len = 0;
	while (*src)
	{
		dest[len] = *src;
		len++;
		src++;
	}
	dest[len] = '\0';
	return (dest);
}
