# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 22:56:31 by obektas           #+#    #+#              #
#    Updated: 2022/10/22 20:42:54 by obektas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRC = $(shell find . ! -name "ft_lst*.c" -name "ft_*.c")
BONUS = $(shell find . -name "ft_lst*.c")

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) *.o
bonus:
	gcc $(FLAG) -c $(BONUS)
	ar rc $(NAME) *.o
clean:
	@rm -f *.o
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re