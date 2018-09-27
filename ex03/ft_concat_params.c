/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 20:53:23 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/27 16:01:52 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 1;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strconcat(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}

char	*ft_newline(char *tmp, int i, int argc)
{
	if (i < argc - 1)
	{
		*tmp = '\n';
		tmp++;
	}
	return (tmp);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		total_len;
	char	*result;
	char	*tmp;

	i = 1;
	total_len = argc - 1;
	while (i < argc)
	{
		total_len += ft_strlen(argv[i]);
		i++;
	}
	result = (char *)malloc(sizeof(char) * total_len);
	tmp = result;
	i = 1;
	while (i < argc)
	{
		tmp = ft_strconcat(tmp, argv[i]);
		tmp = ft_newline(tmp, i, argc);
		i++;
	}
	return (result);
}
