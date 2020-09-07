/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 10:51:32 by ahubert           #+#    #+#             */
/*   Updated: 2020/01/29 10:51:33 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libftprintf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "libft/libft.h":

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int		ft_identify(const char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
		 	return (i);
		i++;
	}
	return (0);
}

char	ft_convert(char *str, int i, char arg)
{
	int j;
	int cpos;
	char *conv;

	j = i;
	conv = "cspdiuxX";
	while ((cpos = ft_identify(str[i], conv)) == 0) //n prend la valeur de retour pour la position du convertisseur
	{
		i++;
		if (i > ft_strlen(conv)) //Si un % mais pas de convertisseur erreur
			return (0);
	}
	i = i - j;
	if (conv[cpos] == 'c')
	{
		return (arg);
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int i;
	int n;
	va_list list;
	va_start(list, format);
	char *str;

	str = ft_strdup(format); //Duplique format dans str
	i = 0;
	while (str[i]) //Tant que tout n'est pas traité
	{
		while (str[i] != '%' && str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
		if (str[i] == '%') //Vérification
		{
			i++;
			if (str[i] == '%')// en cas de double ( %% )
				write(1, &str[i], 1);
			else
			{

				ft_putchar(ft_convert(str, i, va_arg(list, int)));
			}
		}
	}
	va_end(list);
	return (0);
}

int	main()
{
	ft_printf("Ceci est un %c test.", 'a');
	printf("\n");
	printf("Ceci est un %c test.", 'a');
	printf("\n");
}
