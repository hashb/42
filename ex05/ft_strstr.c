/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 18:04:07 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/25 19:55:33 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strstr_helper(char *pos, char *to_find)
{
	int res;

	res = 1;
	while (*pos != '\0' || *to_find != '\0')
	{
		if (*pos == *to_find)
		{
			pos++;
			to_find++;
		}
		else
		{
			res = 0;
			break ;
		}
	}
	return (res);
}

char	*ft_strstr(char *str, char *to_find)
{
	char *pos;

	pos = str;
	while (*pos != '\0')
	{
		if (*pos == *to_find)
		{
			if (ft_strstr_helper(pos, to_find))
				return (pos);
		}
		else
			pos++;
	}
	return (pos);
}
