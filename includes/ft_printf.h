/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:44:26 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/17 12:44:27 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define FALSE 0
# define TRUE 1

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef	struct		s_printf
{
	int		negative;
	int		vpstar;
	int		vwstar;
	int		wstar;
	int		pstar;
	int		minus;
	int		czero;
	char	conv;
	int		count;
	int		zero;
	int		nconv;
	int		pos;
	int		cpos;
	char	*twidth;
	int		lwidth;
	int		width;
	int		prec;
	int		is_width;
	int		is_prec;
}					t_printf;

void			ft_c_convert(const char *format, t_printf *tab, va_list list);
void			ft_di_convert(const char *format, t_printf *tab, va_list list);
char 			ft_identify(const char *format, va_list list, t_printf *tab);
void			ft_initialize(t_printf *tab);
void			ft_intermediary(const char *format, t_printf *tab, va_list list);
void			ft_mx_convert(const char *format, t_printf *tab, va_list list);
void			ft_p_convert(const char *format, t_printf *tab, va_list list);
int				ft_print_string(const char *format, va_list list, t_printf *tab);
int				ft_printf(const char *format, ...);
unsigned int	ft_putstr_toupper(char *s);
unsigned int	ft_putstr(char *s);
void			ft_s_convert(const char *format, t_printf *tab, va_list list);
int				ft_toupper(int c);
void			ft_x_convert(const char *format, t_printf *tab, va_list list);
void			ft_putchar(char c);
char			*ft_itoa_base(long long int n, long long int base, t_printf *tab);
void			ft_putnbr(int n, t_printf *tab);
int				ft_atoi(const char *s);
int				ft_isdigit(int c);
size_t			ft_widthlength(const char *format, t_printf *tab, int n);
char			*ft_strdup(const char *s1);
int				ft_strlen(const char *s);
void			ft_insert_width(const char *str, t_printf *tab);
void			ft_flags(const char *format, va_list list, t_printf *tab, int n);
int				ft_wstar(const char *format, t_printf *tab);
int				ft_prec(const char *format, t_printf *tab);
int				ft_pstar(const char *format, t_printf *tab);
char			*ft_itoa_display(long long int t, long long int n,
							long long int base, int negative);

#endif
