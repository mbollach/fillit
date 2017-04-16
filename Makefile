# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbollach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/16 17:37:27 by mbollach          #+#    #+#              #
#    Updated: 2017/04/12 18:59:22 by mbollach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c \
	  ft_conditions.c \
	  ft_deck.c \
	  ft_test.c \
	  ft_first.c \
	  ft_fit.c \

LIB = make -C libft/

all: $(NAME)

$(NAME):
	$(LIB)
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) ./libft/libft.a -I./ -I./libft/

clean:
	$(LIB) clean

fclean: clean
	$(LIB) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
