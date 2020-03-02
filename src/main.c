/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 19:41:38 by tduval            #+#    #+#             */
/*   Updated: 2020/03/02 13:28:59 by tduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <stdio.h>

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

void	ft_print_grid(int grid[9][9])
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			ft_putchar(grid[i][j] + 48);
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}		
}

void	ft_fill_grid(int grid[9][9], char **av)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (av[i + 1][j] == '.')
				grid[i][j] = 0;
			else
				grid[i][j] = av[i + 1][j] - 48;
			j++;
		}
		j = 0;
		i++;
	}
}

int		main(int ac, char **av)
{
	int		grid[9][9];
	size_t	num;

	num = ac;
	if (ft_valid(av, num))
	{
		ft_fill_grid(grid, av);
		ft_putstr("\nUnsolved grid :\n\n");
		ft_print_grid(grid);
		ft_putstr("\n\n");
		ft_putstr("Solved grid :\n\n");
		ft_solve_sudoku(grid, 0, 0);
		ft_print_grid(grid);
		ft_putchar('\n');
	}
	else
		ft_putstr("\nGrid error\n\n");
	
	return (0);
}
