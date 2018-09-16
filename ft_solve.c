/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 20:29:04 by tduval            #+#    #+#             */
/*   Updated: 2018/09/17 01:09:47 by tduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <stdio.h>

char	ft_is_valid(int grid[9][9], int lin, int col, int val)
{
	
	size_t	cti;
	size_t	ctj;
	size_t	i;
	size_t	j;

	cti = 0;
	ctj = 0;
	i = 0;
	j = 0;
	while (ctj < 9)
	{
		if (grid[lin][ctj] == val)
			return (0);
		ctj++;
	}
	while (cti < 9)
	{
		if (grid[cti][col] == val)
			return (0);
		cti++;
	}
	cti = ((lin / 3 % 3) * 3);
	ctj = ((col / 3 % 3) * 3);
	while (i < 3)
	{
		while (j < 3)
		{
			if (grid[cti + i][ctj + j] == val)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

char	ft_solve_sudoku(int grid[9][9], int lin, int col)
{
	int	val;

	val = 1;
	if (col == 9)
	{
		lin++;
		col = 0;
	}
	if (lin == 9)
		return (1);
	if (grid[lin][col] != 0)
		return (ft_solve_sudoku(grid, lin, col + 1));
	while (val < 10)
	{
		if (ft_is_valid(grid, lin, col, val))
		{
			grid[lin][col] = val;
			if (ft_solve_sudoku(grid, lin, col + 1))
				return (1);
		}
		val++;
	}
	grid[lin][col] = 0;
	return (0);
}
