# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 00:34:47 by jpinyot           #+#    #+#              #
#    Updated: 2017/11/13 01:14:46 by jpinyot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c

all: $(NAME)

$(NAME):
	gcc -Iincludes -c $(SRCS)
	ar rc $(NAME) *.o

clean:
	@/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
