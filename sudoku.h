/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 19:48:49 by tduval            #+#    #+#             */
/*   Updated: 2018/09/17 00:43:02 by tduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SUDOKU_H
# define	SUDOKU_H

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(const char *s);
char	ft_solve_sudoku(int grid[9][9], int lin, int col);
char	ft_is_valid(int grid[9][9], int lin, int col, int val);
void	ft_print_grid(int grid[9][9]);

#endif
