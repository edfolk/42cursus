# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljustici <ljustici@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 13:16:06 by ljustici          #+#    #+#              #
#    Updated: 2022/07/20 12:19:23 by ljustici         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c ft_print_flag_content.c main.c \

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Werror -Wextra -Wall

RM		=	rm -f

AR		=	ar rcs

all:	$(NAME)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(AR) $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re:		fclean all

.PHONY: all, clean, fclean, re, bonus