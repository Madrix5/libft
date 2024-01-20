# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 11:25:32 by adrijime          #+#    #+#              #
#    Updated: 2024/01/19 13:47:01 by adrijime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#=============================== COLORINCHIS ==================================#

DEL_LINE        =   \033[2K
ITALIC          =   \033[3m
BOLD            =   \033[1m
DEF_COLOR       =   \033[0;39m
GRAY            =   \033[0;90m
RED             =   \033[0;91m
GREEN           =   \033[0;92m
YELLOW          =   \033[0;93m
BLUE            =   \033[0;94m
MAGENTA         =   \033[0;95m
CYAN            =   \033[0;96m
WHITE           =   \033[0;97m
BLACK           =   \033[0;99m
ORANGE          =   \033[38;5;209m
BROWN           =   \033[38;2;184;143;29m
DARK_GRAY       =   \033[38;5;234m
MID_GRAY        =   \033[38;5;245m
DARK_GREEN      =   \033[38;2;75;179;82m
DARK_YELLOW     =   \033[38;5;143m

#================================ VARIABLES ===================================#

NAME	= libft.a
CC		= gcc
FLAGS	= -Wall -Wextra -Werror -MMD
RM 		= rm -rf
LIBC 	= ar -rcs

#=================================== SRC ======================================#

SRCF =	main.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		

#=============================== DIRECTORIES ==================================#

DIR_OBJ = objects

OBJ = $(addprefix $(DIR_OBJ)/, $(SRCF:.c=.o))
DEP = $(addprefix $(DIR_OBJ)/, $(SRCF:.c=.d))

#================================== RULES =====================================#

all: dir $(NAME)
-include $(DEP)

dir:
		mkdir -p $(DIR_OBJ)
		echo "$(MAGENTA)Directory created$(DEL_LINE)"

$(DIR_OBJ)/%.o: %.c
		$(CC) $(FLAGS) -c $< -o $@

$(NAME): ${OBJ}
		$(LIBC) $@ $^
		echo "$(GREEN)All compiled$(DEL_LINE)"

#====================== Quitar cuando este acabado ============================#

prueba: a.out
		echo "$(ORANGE)EJECUTANDO...$(DEL_LINE)"
		./a.out

a.out: 
		$(CC) $(FLAGS) $(SRCF)
		echo "Creando a.out..."

#================================== CLEAN =====================================#

clean:
		$(RM) $(DIR_OBJ)
		echo "$(CYAN)Deleted directory objects$(DEL_LINE)"

fclean: clean
		$(RM) $(NAME) a.out libft.h.gch
		echo "$(YELLOW)All done$(DEL_LINE)"

re: fclean all

rep: fclean prueba

#================================== PHONY =====================================#

.PHONY: all clean fclean re prueba

.SILENT: