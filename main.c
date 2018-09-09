/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 19:41:38 by tduval            #+#    #+#             */
/*   Updated: 2018/09/09 16:42:44 by tduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

char	ft_valid(char **grid, int num)
{
	size_t	i;
	size_t	j;

	i = 1;
	j = 0;
	if (num != 10)
		return (0);
	while (i < 10)
	{
		while (grid[i][j])
			if ((grid[i][j] > '0' && grid[i][j] < ':') || grid[i][j] == '.')
				j++;
			else
				return (0);
		if (j != 9)
			return (0);
		j = 0;
		i++;
	}
	return (1);
}

void	ft_print_grid(char **grid)
{
	size_t	i;
	size_t	j;

	i = 1;
	j = 0;
	while (i < 10)
	{
		while (j < 9)
		{
			ft_putchar(grid[i][j]);
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}		
}

int		main(int ac, char **av)
{
	char	**grid;
	size_t	num;

	num = ac;
	grid = av;
	if(ft_valid(grid, num))
	{
		ft_putstr("\nUnsolved grid :\n\n");
		ft_print_grid(grid);
		ft_putstr("\n\n");
		ft_putstr("Solved grid :\n\n");
		ft_solve_sudoku(grid);
		ft_putchar('\n');
	}
	else
		ft_putstr("\nGrid error\n\n");
	return (0);
}
