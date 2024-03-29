#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 18:54:00 by ychnakib          #+#    #+#              #
#    Updated: 2013/11/20 16:37:39 by ychnakib         ###   ########.fr        #
#                                                                              #
#******************************************************************************#
NAME = libft.a

SRC = srcs/ft_*.c lib/libft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
