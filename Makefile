#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 18:54:00 by ychnakib          #+#    #+#              #
#    Updated: 2013/11/19 18:57:10 by ychnakib         ###   ########.fr        #
#                                                                              #
#******************************************************************************#
NAME = libft

SRC = srcs/ft_*.c lib/libft.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	gcc -o $(NAME) libft.o

clean:
	/bin/rm -f libft.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
