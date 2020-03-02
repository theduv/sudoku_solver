# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tduval <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/04 19:49:50 by tduval            #+#    #+#              #
#    Updated: 2020/03/02 13:34:57 by tduval           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	solve

SRC		=	src/main.c		\
			src/ft_lib.c	\
			src/ft_solve.c	\


all		:	$(NAME)

$(NAME)	:
	gcc -Wall -Werror -Wextra -I . $(SRC) -o $(NAME)

fclean	:
	rm -f $(NAME)

re		: fclean all

.PHONY: re fclean all
