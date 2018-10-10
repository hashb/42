/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 18:04:07 by kchenna           #+#    #+#             */
/*   Updated: 2018/09/25 22:23:43 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strstr_helper(char *pos, char *to_find)
{
	int res;

	res = 1;
	while (*pos != '\0' && *to_find != '\0')
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
	if (*to_find != '\0')
		return (0);
	return (res);
}

char	*ft_strstr(char *str, char *to_find)
{
	char *pos;

	pos = str;
	if (*to_find == '\0')
		return (str);
	while (*pos != '\0')
	{
		if (*pos == *to_find)
		{
			if (ft_strstr_helper(pos, to_find))
				return (pos);
			pos++;
		}
		else
			pos++;
	}
	return (0);
}
