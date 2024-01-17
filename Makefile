# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 11:25:32 by adrijime          #+#    #+#              #
#    Updated: 2024/01/17 19:58:03 by adrijime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#================================ VARIABLES ===================================#

NAME	= libft.a
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
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
		

#=============================== DIRECTORIES ==================================#

DIR_OBJ = objects

OBJ = $(addprefix $(DIR_OBJ)/, $(SRCF:.c=.o))
DEP = $(addprefix $(DIR_OBJ)/, $(SRCF:.c=.d))

#================================== RULES =====================================#

all: dir $(NAME)
-include $(DEP)

dir:
		mkdir $(DIR_OBJ)
		echo "Directory created"

$(DIR_OBJ)/%.o: %.c
		$(CC) -MMD $(FLAGS) -c $< -o $@

$(NAME): ${OBJ}
		$(LIBC) $(NAME) $(OBJ)
		touch $(NAME)
				echo "All compiled"

#====================== Quitar cuando este acabado ============================#

prueba: a.out
		echo "EJECUTANDO..."
		./a.out

a.out: 
		$(CC) $(FLAGS) $(SRCF)
		@echo "Creando a.out..."

#================================== CLEAN =====================================#

clean:
		$(RM) $(DIR_OBJ)
		echo "Deleted directory objects"

fclean: clean
		$(RM) $(NAME) a.out libft.h.gch
		echo "All done"

re: fclean all

rep: fclean prueba

#================================== PHONY =====================================#

.PHONY: all clean fclean re prueba

.SILENT:
