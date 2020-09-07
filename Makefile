# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahubert <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/10 15:42:35 by ahubert           #+#    #+#              #
#    Updated: 2019/10/29 11:57:31 by ahubert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_printf.a

SRCS	=	ft_c_convert.c\
			ft_identify.c\
			ft_initialize.c\
			ft_intermediary.c\
			ft_mx_convert.c\
			ft_print_string.c\
			ft_printf.c\
			ft_putstr_toupper.c\
			ft_putstr.c\
			ft_s_convert.c\
			ft_toupper.c\
			ft_x_convert.c\
			ft_p_convert.c\
			ft_putchar.c\
			ft_itoa_base.c\
			ft_putchar.c\
			ft_di_convert.c\
			ft_putnbr.c\
			ft_atoi.c\
			ft_isdigit.c\
			ft_widthlength.c\
			ft_strdup.c\
			ft_strlen.c\
			ft_insert_width.c\
			ft_flags.c\
			ft_wstar.c\
			ft_prec.c\
			ft_pstar.c


OBJS	= $(SRCS:.c=.o)

CC		= gcc -Wall -Werror -Wextra

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: $(BONUS_OBJS)
	ar rc $(NAME) $(BONUS_OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
