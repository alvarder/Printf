NAME = libftprintf.a
SRCS = ft_printf.c \ Source/ft_itoa.c \ Source/ft_print_hex.c \ Source/ft_print_ptr.c \ Source/ft_print_unsint.c \ Source/ft_printf_utils.c \ Source/ft_putchar_fd.c \

FLAGS = -Wall -Werror -Wextra

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)
CC = gcc
RM = rm -f
NORME = norminette -R


.c.o:
	$(CC) $(FLAGS) $(INCLUDES) -g -c $< -o $(<:.c=.o)

	$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)
clean:
	$(RM) $(OBJS) a.out
fclean: clean
	$(RM) $(NAME)
re: fclean all
