# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 11:25:32 by adrijime          #+#    #+#              #
#    Updated: 2024/01/10 14:11:02 by adrijime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#================================ VARIABLES ===================================#

NAME	= libft.a
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
RM 		= rm -rf
LIBC 	= ar -rcs

#=================================== SRC ======================================#

SRCF =	ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_tolower.c \
		ft_toupper.c \

#=============================== DIRECTORIES ==================================#

DIR_OBJ = objects

OBJ = $(addprefix $(DIR_OBJ)/, $(SRCF:.c=.o))
DEP = $(addprefix $(DIR_OBJ)/, $(SRCF:.c=.d))

#================================== RULES =====================================#

all: dir $(NAME)
-include $(DEP)

dir:
		mkdir $(DIR_OBJ)
		@echo "Directory created"

$(DIR_OBJ)/%.o: %.c
		$(CC) -MMD $(FLAGS) -c $< -o $@

$(NAME): ${OBJ}
		$(LIBC) $(NAME) $(OBJ)
		touch $(NAME)
				@echo "All compiled"

#================================== CLEAN =====================================#

clean:
		$(RM) $(DIR_OBJ)
		echo "Deleted directory objects"

fclean: clean
		$(RM) $(NAME)
		@echo "All done"

re: fclean all

#================================== PHONY =====================================#

.PHONY: all clean fclean re

.SILENT: