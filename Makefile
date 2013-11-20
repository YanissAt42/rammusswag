#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychnakib <ychnakib@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 18:54:00 by ychnakib          #+#    #+#              #
#    Updated: 2013/11/20 12:54:47 by ychnakib         ###   ########.fr        #
#                                                                              #
#******************************************************************************#
NAME = libft

SRC = srcs/*.c lib/libft.h

all: $(NAME)

$(NAME):
	cc -c -Wall -Werror -Wextra $(SRC)
	cc -o $(NAME) srcs/libft.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
