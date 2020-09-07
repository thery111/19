
#include "includes/ft_printf.h"

int main()
{
//	printf("%s\n", ft_itoa_base(15846328, 16));
	printf("---------------------------------------------------------------\n");
	printf("---------------------------------------------------------------\n");
	printf("---------------------------------------------------------------\n");
	printf("---------------------------------------------------------------\n");
	printf("rRETd :	%i\n", printf("%050.5d\n", -1234567890));
	printf("mRETd :	%i\n", ft_printf("%015.13d\n", -100000));
	printf("---------------------------------------------------------------\n");
	printf("rRETc :	%i\n", printf("%5c\n", 'e'));
	printf("mRETc :	%i\n", ft_printf("%10c\n", 'a'));
	printf("---------------------------------------------------------------\n");
	printf("rRETs :	%i\n", printf("%10.4s\n", "OKOKOK"));
	printf("mRETs :	%i\n", ft_printf("%9s\n", "OKOKOK"));
	printf("---------------------------------------------------------------\n");
	printf("rRETp :	%i\n", printf("%10p\n", "19"));
	printf("mRETp :	%i\n", ft_printf("%10p\n", "19"));
	printf("---------------------------------------------------------------\n");
	printf("rRETi :	%i\n", printf("%.4i\n", -123456789));
	printf("mRETi :	%i\n", ft_printf("%20i\n", 123456789));
	printf("---------------------------------------------------------------\n");
	printf("rRETx :	%i\n", printf("%015.8x\n", 123456));
	printf("mRETx :	%i\n", ft_printf("%15x\n", 123456));
	printf("---------------------------------------------------------------\n");
	printf("rRETX :	%i\n", printf("%X\n", -525454));
	printf("mRETX :	%i\n", ft_printf("%9X\n", 525454));
	printf("---------------------------------------------------------------\n");
	printf("RET :	%i\n", printf("REAL :	Han %d | %c | %s | %p | %i | %x | %X ouais\n", 524862, 'a', "O", "19", 123456789, 123456, 123456));
	printf("RET :	%i\n", ft_printf("MINE :	Han %d | %c | %s | %p | %i | %x | %X ouais\n", 524862, 'a', "O", "19", 123456789, 123456, 123456));
	printf("---------------------------------------------------------------\n");
	printf("RET :	%i\n", printf("REAL :	Han %-10d | %-10c | %-10s | %-10p | %-10i | %-10x | %-10X ouais\n", 524862, 'a', "O", "19", 123456789, 123456, 123456));
	printf("RET :	%i\n", ft_printf("MINE :	Han %-10d | %-10c | %-10s | %-10p | %-10i | %-10x | %-10X ouais\n", 524862, 'a', "O", "19", 123456789, 123456, 123456));
	printf("---------------------------------------------------------------\n");
	printf("RET :	%i\n", printf("REAL :	Han %10d | %10c | %10s | %10p | %10i | %10x | %10X ouais\n", 524862, 'a', "O", "19", 123456789, 123456, 123456));
	printf("RET :	%i\n", ft_printf("MINE :	Han %10d | %10c | %10s | %10p | %10i | %10x | %10X ouais\n", 524862, 'a', "O", "19", 123456789, 123456, 123456));
	printf("---------------------------------------------------------------\n");
	printf("---------------------------------------------------------------\n");
	printf("---------------------------------------------------------------\n");
	printf("---------------------------------------------------------------\n");
	printf("%s\n", ft_itoa_base(5524552455245524, 16, 0));
}
//make fclean && make && gcc -Wall -Werror -Wextra ft_printf.a main.c && ./a.out
/*
Precision :
On d : 0 ignoré si '-' et définit le nombre de chiffre, attention à
respecter le '-', si precision > width ou width == FALSE, precision devient
width, si width > precision, precision définit le nombre de chiffer en fill 0;
on c : pas d'effet;
on s : prendre en compte le 0 ou le '-' avec une priorité pour le '-' et
la précision définit la longueur maximale de l'argument reçu
on p : incompatible;
on i : same as d;
on x : same as d;
on X : same as d;
*/
