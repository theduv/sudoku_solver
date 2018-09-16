# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tduval <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/04 19:49:50 by tduval            #+#    #+#              #
#    Updated: 2018/09/17 01:11:42 by tduval           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	solve

SRC		=	main.c		\
			ft_lib.c	\
			ft_solve.c	\

all		:	$(NAME)

$(NAME)	:
	gcc -Wall -Werror -Wextra $(SRC) -o $(NAME)

fclean	:
	rm -f $(NAME)

re		:
	rm -f $(NAME)
	gcc -Wall -Werror -Wextra $(SRC) -o $(NAME)
