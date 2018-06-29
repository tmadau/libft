# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmadau <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/24 14:02:48 by tmadau            #+#    #+#              #
#    Updated: 2018/06/28 14:39:50 by tmadau           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gnl.a

CFILES = get_next_line.c

HF = get_next_line.h

OFILES = $(CFILES:.c=.o)

CC = gcc

CF = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CF) $(CFILES) -I $(HF)
	ar -rcs $(NAME) $(OFILES)

main:
	gcc -Wall -Wextra -Werror get_next_line.c main.c libft/libft.a
	mv a.out test

test: 
	gcc -Wall -Wextra -Werror get_next_line.c test.c libft/libft.a
	mv a.out test

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
