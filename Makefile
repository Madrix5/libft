# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 11:25:32 by adrijime          #+#    #+#              #
#    Updated: 2024/01/10 17:05:52 by adrijime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#================================ VARIABLES ===================================#

NAME	= libft.a
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
RM 		= rm -rf
LIBC 	= ar -rcs

#=================================== SRC ======================================#

SRCF =	$(wildcard *.c)

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
		@echo "Deleted directory objects"

fclean: clean
		$(RM) $(NAME) a.out libft.h.gch
		@echo "All done"

re: fclean all

#================================== PHONY =====================================#

.PHONY: all clean fclean re

.SILENT: