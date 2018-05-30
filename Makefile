# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmadau <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/24 14:02:48 by tmadau            #+#    #+#              #
#    Updated: 2018/05/30 14:28:52 by tmadau           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIBC = libc-func/

ADD = add-func/

PER = per-func/

BON = bonus-func/

HED = headers/

CFLAGS += -Wall -Wextra -Werror -I include \

SRCS = $(LIBC)ft_bzero.c \
	   $(LIBC)ft_isascii.c \
	   $(LIBC)ft_tolower.c \
	   $(LIBC)ft_isalnum.c \
	   $(LIBC)ft_isdigit.c \
	   $(LIBC)ft_memset.c \
	   $(LIBC)ft_toupper.c \
	   $(LIBC)ft_isalpha.c \
	   $(LIBC)ft_isprint.c \
	   $(LIBC)ft_strlen.c \
	   $(LIBC)ft_strdup.c \
	   $(LIBC)ft_strcpy.c \
	   $(LIBC)ft_atoi.c \
	   $(LIBC)ft_memcpy.c \
	   $(PER)ft_islower.c \
	   $(PER)ft_isupper.c \
	   $(ADD)ft_memalloc.c \
	   $(ADD)ft_memdel.c \
	   $(ADD)ft_putchar.c \
	   $(ADD)ft_putchar_fd.c \
	   $(ADD)ft_putendl.c \
	   $(ADD)ft_putendl_fd.c \
	   $(ADD)ft_putstr.c \
	   $(ADD)ft_putstr_fd.c \

OBJS = $(SRCS:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) -rcs $(NAME) $?

clean:
	$(RM) $(OBJS)

main:
	gcc main.c -L. -lft -o test

fclean: clean
	$(RM) $(NAME)

re: fclean all
