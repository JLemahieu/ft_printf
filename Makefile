NAME = libftprintf.a

CC = gcc
FLAGS = -Wall -Werror -Wextra

SRC_PATH = src
LIB_PATH = lib
PRINT_PATH = src/print
OBJ_PATH = obj

SOURCES = ft_exec.c \
	ft_parse.c \
	ft_printf.c \
	utils.c

LIB = ft_atoi.c \
	ft_debug.c \
	ft_isdigit.c \
	ft_nbrlen.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_putnstr.c \
	ft_putstr.c \
	ft_strchr.c \
	ft_strlen.c \
	ft_strndup.c \
	ft_bzero.c \
	ft_putwchar.c \
	ft_wcharlen.c \
	ft_putnwstr.c \
	ft_wstrlen.c \
	ft_putbuffer.c \
	ft_putinbuffer.c

PRINT = ft_print_char.c \
	ft_print_string.c \
	ft_print_hex.c \
	ft_print_oct.c \
	ft_print_int.c \
	ft_print_uint.c \
	ft_print_uo.c \
	ft_print_ptr.c \
	ft_print_inv.c

SRCS = $(addprefix $(SRC_PATH)/, $(SOURCES))
LIBS = $(addprefix $(LIB_PATH)/, $(LIB))
PNT = $(addprefix $(PRINT_PATH)/, $(PRINT))

OBJS = $(addprefix $(OBJ_PATH)/, $(SOURCES:.c=.o))
OBJL = $(addprefix $(OBJ_PATH)/, $(LIB:.c=.o))
OBJP = $(addprefix $(OBJ_PATH)/, $(PRINT:.c=.o))

all: $(NAME)

$(NAME): $(OBJS) $(OBJL) $(OBJP)
	@ar rc $(NAME) $(OBJS) $(OBJL) $(OBJP)
	@ranlib $(NAME)
	@echo "Compilation libftprintf.a OK"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir -p obj
	@$(CC) $(FLAGS) -o $@ -c $<

$(OBJ_PATH)/%.o: $(LIB_PATH)/%.c
	@$(CC) $(FLAGS) -o $@ -c $<

$(OBJ_PATH)/%.o: $(PRINT_PATH)/%.c
	@$(CC) $(FLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ_PATH)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
