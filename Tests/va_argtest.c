/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 12:37:35 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/05 12:37:37 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int add(int n, ...)
{
    va_list l;
    int total;
    total = 0;
    va_start(l, n);
	int i = 0;

    while (i < n)
	{
        total = total + va_arg(l, int);
		i++;
	}
    va_end(l);
    return total;
}

int main(int argc, const char * argv[])
{
    char *value1, *value2, *value3, *value4, *value5;
//    int result;

    value1 = "1sdfgdsfg";
    value2 = "2sdfgsdfg";
    value3 = "3sdfgsdfgs";
	value4 = "4dsfgdsfg";
	value5 = "5sdfgdsfgsdfgsdfgdsfgsdfgcvxcv";

    //result = add(5, value1, value2, value3, value4, value5);

    printf("The sum of %s, %s, %s, %s, %s\n", value1, value2, value3, value4, value5);

    return (0);
}
