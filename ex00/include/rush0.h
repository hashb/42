/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkirkby <nkirkby@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 20:09:08 by nkirkby           #+#    #+#             */
/*   Updated: 2018/10/07 16:23:48 by nkirkby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH0_H
# define RUSH0_H

# define MAX_NAME_SIZE_BYTES 20

typedef struct		s_potential_match
{
	char			(* reference_char)(int, int, int, int);
	char			name[MAX_NAME_SIZE_BYTES];
}					t_potential_match;

char				rush00(int width, int height, int x, int y);
// int					rush01(char *arr, int w, int h);
// int					rush02(char *arr, int w, int h);
// int					rush03(char *arr, int w, int h);
char				rush04(int width, int height, int x, int y);

t_potential_match	g_matches[] = {
	{ .reference_char = &rush00, .name = "rush-00"},
	// { .reference_char = &rush01, .name = "rush-01"},
	// { .reference_char = &rush02, .name = "rush-02"},
	// { .reference_char = &rush03, .name = "rush-03"},
	{ .reference_char = &rush04, .name = "rush-04"},
};

#endif
