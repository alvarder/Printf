#include "ft_prinf.h"
#include "libft.h"

int ft_print_perc()
{
        write(1, "%", 1);
        return(1);
}
void ft_put_str(char *str)
{
        int a;

        a = 0;
        while (str[a])
        {
                write(1, &str[a], 1);
                a++;
        }
}

int ft_print_str(char *str)
{
        int a;

        a = 0;
        if (str == NULL)
        {
                ft_put_str("(null)");
                return(6);
        }
        while(str[a])
        {
                write(1, &str[a], 1);
                a++;
        }
        return(a);
}

int ft_print_numb(int n)
{
        int a;
        char *num;

        a = 0;
        num = ft_itoa(n);
        a = ft_print_str(num);
        free(num);
        return(a);
}
