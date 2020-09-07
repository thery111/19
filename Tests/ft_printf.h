/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 10:50:12 by ahubert           #+#    #+#             */
/*   Updated: 2020/01/29 10:50:14 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "../srcs/libft/libft.h"

# define TRUE 1
# define FALSE 0

typedef struct	s_printf
{
	char	conv;
	int		nconv;
	int 	pos;
	int		count;
	int		width;
	int		twidth;
	int		is_width;
	int		precision;
	int		is_precision;
	int		cpos;
}				t_printf;

int 				ft_printf(const char *, ...);
int 				ft_print_string(const char *format, va_list list, t_printf *tab);
void				ft_initialize(t_printf *tab);
void				ft_putchar(char c);
unsigned int		ft_putstr(char *s);
char				ft_identify(const char *format, t_printf *tab);
void				ft_intermediary(const char *format, t_printf *tab, va_list list);
void				ft_c_convert(const char *format, t_printf *tab, va_list list);
void				ft_s_convert(const char *format, t_printf *tab, va_list list);
void				ft_p_convert(const char *format, t_printf *tab, va_list list);
void				ft_x_convert(const char *format, t_printf *tab, va_list list);
int					ft_toupper(int c);
void				ft_mx_convert(const char *format, t_printf *tab, va_list list);
unsigned int		ft_putstr_toupper(char *s);

#endif
