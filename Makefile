# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 11:25:32 by adrijime          #+#    #+#              #
#    Updated: 2024/01/09 20:04:00 by adrijime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#================================ VARIABLES ===================================#

NAME	= libft.a
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
RM 		= rm -rf
LIBC 	= ar -r

#=================================== SRC ======================================#

SRCF =	ft_bzero \
		ft_isalnum \
		ft_isalpha \
		ft_isascii \
		ft_isdigit \
		ft_isprint \
		ft_memcpy \
		ft_memmove \
		ft_memset \
		ft_strlcat \
		ft_strlen \
		ft_tolower \
		ft_toupper \

#=============================== DIRECTORIES ==================================#

DIR_OBJ = objects

SRC = $(addsufix .c, $(SRCF))
OBJ = $(addprefix $(DIR_OBJ)/, $(SRC:.c=.o)))
DEP = $(addprefix $(DIR_OBJ)/, $(SRC:.c=.d)))

#================================== RULES =====================================#

all: dir $(NAME)
-include $(DEP)

dir:
		-mkdir $(DIR_OBJ)

$(DIR_OBJ)/%.o: %.c
		$(CC) -MMD $(FLAGS) -c $< -o $@

$(NAME): ${OBJ}
		$(LIBC) $(NAME) $(OBJ)
		touch $(NAME)
				@echo "All compiled"

#================================== CLEAN =====================================#

.PHONY: all clean fclean re

clean:
		$(RM) $(DIR_OBJ)
		echo "Deleted objects"

fclean: clean
		$(RM) $(NAME)
		@echo "All done"

re: fclean all

.SILENT: