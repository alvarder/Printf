
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int ft_printf(const char *str, ...);
int ft_types(va_list args, const char type);
int ft_print_char(int c);
int ft_print_perc();
int ft_print_str(char *str);
int ft_print_numb(int n);
int	ft_print_hex(unsigned int num, const char format);
int     ft_print_ptr(unsigned long long ptr);
int	ft_print_unsigned(unsigned int n);
int	ft_hex_len(unsigned	int num);
int     ft_ptr_len(uintptr_t num);
int	ft_num_len(unsigned	int num);
char	*ft_uitoa(unsigned int n);
void ft_put_str(char *str);
void	ft_put_hex(unsigned int num, const char format);
void    ft_put_ptr(uintptr_t num);

#endif
