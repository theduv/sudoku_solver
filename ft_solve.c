/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 20:29:04 by tduval            #+#    #+#             */
/*   Updated: 2018/09/09 16:59:07 by tduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

char	is_valid(char **grid, char pos[2], char val)
{
	size_t	i;
	size_t	j;
	size_t	cti;
	size_t	ctj;

	i = pos[0];
	j = pos[1];
	cti = 0;
	ctj = 0;
	while (ctj < 9);
	{
		if (grid[pos[0]][ctj] == val)
			return (0);
		ctj++
	}
	while (cti < 9)
	{
		if (grid[cti][pos[1]] == val)
			return (0);
		cti++;
	}
	return (1);
}

void	ft_solve_sudoku(char **grid)
{
	ft_print_grid(grid);
}
