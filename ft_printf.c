#include "ft_prinf.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int ft_print_char(int c)
{
	write(1, &c, 1);
	return(1);
}

int ft_types(va_list args, const char type)
{
	int print_length;

	print_length = 0;
	if (type == 'c')
		print_length += ft_print_char(va_arg(args, int));
	else if (type == 's')
		print_length += ft_print_str(va_arg(args, char *));
	else if (type == 'p')
		print_length += ft_print_ptr(va_arg(args, unsigned long long)); 
	else if (type == 'd' || type == 'i')
		print_length += ft_print_numb(va_arg(args, int));
	else if (type == 'u')
		print_length += ft_print_unsigned(va_arg(args, unsigned int));
	else if (type == 'x' || type == 'X')
		print_length += ft_print_hex(va_arg(args, unsigned int), type);
	else if (type == '%')
		print_length += ft_print_perc();
	return(print_length);
		
}

int ft_printf(const char *str, ...)
{
	int cont;
	va_list args;
	int print_length;

	cont = 0;
	print_length = 0;
	va_start(args, str);
	while(str[cont])
	{
		if (str[cont] == '%')
		{
			print_length += ft_types(args, str[cont + 1]);
			cont++;
		}
		else
			print_length += ft_print_char(str[cont]);
		cont++;
	}
	va_end(args);
	return(print_length);
}

int main()
{
	const char *str;
	char car;
	char *strr; 	

	str = "akbyuvk6 %s";
	car = '?';
	strr = "LOL";
	ft_printf("Hola soy Alvaro y juego al %s %c %d %x %X %u \n", "LOL", '!', -2653, 12343, 45366, 36346463453);
}
