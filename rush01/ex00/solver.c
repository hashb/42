/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchenna <kchenna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 11:19:58 by smoissel          #+#    #+#             */
/*   Updated: 2018/09/30 12:13:30 by kchenna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solver.h"

void	ft_find_empty(struct s_coord *idx, int sudoku_grid[9][9])
{
	int i;
	int j;

	(*idx).x = -1;
	(*idx).y = -1;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (sudoku_grid[i][j] == 0)
			{
				(*idx).x = i;
				(*idx).y = j;
				return ;
			}
			j++;
		}
		i++;
	}
}

int		ft_solver(int sudoku_grid[9][9])
{
	struct s_coord	idx;
	int				i;

	ft_find_empty(&idx, sudoku_grid);
	if (idx.x == -1)
		return (1);
	i = 1;
	while (i <= 9)
	{
		sudoku_grid[idx.x][idx.y] = i;
		if (ft_is_valid(idx, sudoku_grid)
			&& ft_solver(sudoku_grid))
			return (1);
		sudoku_grid[idx.x][idx.y] = 0;
		i++;
	}
	return (0);
}
