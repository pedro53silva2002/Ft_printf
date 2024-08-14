# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: peferrei <peferrei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/29 11:28:49 by peferrei          #+#    #+#              #
#    Updated: 2024/05/03 17:47:12 by peferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS            =   ft_printf.c ft_printf_strlen.c ft_printf_putstr_fd.c ft_printf_putchar_fd.c \
						ft_printf_putnbr_fd.c ft_printf_putnbr_base.c ft_printf_strncmp.c ft_printf_putptr.c \
						ft_printf_itoa.c ft_printf_strlcpy.c ft_printf_puthex.c

OBJS            = $(SRCS:.c=.o)

CC              = cc

RM              = rm -f

CFLAGS          = -Wall -Wextra -Werror

NAME            = libftprintf.a

all:            $(NAME)

$(NAME):        $(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:         clean
			$(RM) $(NAME)

re:             fclean $(NAME)

.PHONY:         all clean fclean re
