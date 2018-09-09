/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 19:48:49 by tduval            #+#    #+#             */
/*   Updated: 2018/09/09 16:51:02 by tduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SUDOKU_H
# define	SUDOKU_H

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(const char *s);
void	ft_solve_sudoku(char **grid);
char	ft_is_valid(char **grid, char pos[2], char val);
void	ft_print_grid(char **grid);

#endif
