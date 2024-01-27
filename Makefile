# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 11:25:32 by adrijime          #+#    #+#              #
#    Updated: 2024/01/27 19:34:01 by adrijime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#================================= COLORES ====================================#

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
FLAGS	= -Wall -Wextra -Werror -MMD -g
RM 		= rm -rf
LIBC 	= ar -rcs

#=================================== SRC ======================================#

SRCF =	ft_isalpha.c 	\
		ft_isdigit.c 	\
		ft_isalnum.c 	\
		ft_isascii.c 	\
		ft_isprint.c 	\
		ft_strlen.c 	\
		ft_memset.c 	\
		ft_bzero.c 		\
		ft_memcpy.c 	\
		ft_memmove.c 	\
		ft_strlcpy.c 	\
		ft_strlcat.c 	\
		ft_toupper.c 	\
		ft_tolower.c 	\
		ft_strchr.c 	\
		ft_strrchr.c 	\
		ft_strncmp.c 	\
		ft_memchr.c 	\
		ft_memcmp.c 	\
		ft_strnstr.c 	\
		ft_atoi.c 		\
		ft_calloc.c 	\
		ft_strdup.c 	\
		ft_substr.c 	\
		ft_strjoin.c 	\
		ft_strtrim.c 	\
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c 	\
		ft_putstr_fd.c 	\
		ft_strmapi.c 	\
		ft_striteri.c 	\
		ft_itoa.c		\
		ft_split.c		\

BON_F = ft_lstadd_back.c	\
		ft_lstadd_front.c	\
		ft_lstclear.c 		\
		ft_lstdelone.c 		\
		ft_lstiter.c 		\
		ft_lstlast.c 		\
		ft_lstmap.c 		\
		ft_lstnew.c 		\
		ft_lstsize.c 		\
		main.c 				\

#=============================== DIRECTORIES ==================================#

DIR_OBJ = objects

OBJ = $(addprefix $(DIR_OBJ)/, $(SRCF:.c=.o))
DEP = $(addprefix $(DIR_OBJ)/, $(SRCF:.c=.d))

B_OBJ = $(addprefix $(DIR_OBJ)/, $(BON_F:.c=.o))
B_DEP = $(addprefix $(DIR_OBJ)/, $(BON_F:.c=.d))

#================================= RULES ======================================#

all: dir $(NAME)
-include $(DEP)
-include $(B_DEP)

dir:
		mkdir -p $(DIR_OBJ)
		echo "$(YELLOW)💾== Directory created objects and dependencies ==💾$(DEF_COLOR)"

$(DIR_OBJ)/%.o: %.c Makefile libft.h
		$(CC) $(FLAGS) -c $< -o $@

$(NAME): ${OBJ}
		$(LIBC) $@ $^
		echo "$(GREEN)✅=== All compiled with flags, created libft.a ===🖥$(DEF_COLOR)"

#================================= BONUS ======================================#

bonus: dir $(NAME) $(B_OBJ)
		if [ -f bonus ]; then\
				echo "🌚 'bonus' is up to date. 🌝";\
		else\
				$(LIBC) $(NAME) $(OBJ) $(B_OBJ);\
				ouch bonus;\
				echo "🍾============== BONUS COMPILADO!!! ==============🥂"\
		fi

#================================= CLEAN ======================================#

clean:
		$(RM) $(DIR_OBJ) bonus
		echo "🧨$(ORANGE)========== Deleted directory objects! ==========🧨$(DEF_COLOR)"

fclean: clean
		$(RM) $(NAME) *.d a.out libft.h.gch bonus
		echo "🧯$(RED)== objects dependencies and directory deleted ==🧯$(DEF_COLOR)"

re: fclean all

rep: ejecutar fclean
#================================== PHONY =====================================#

.PHONY: all clean fclean re bonus rep ejecutar a.out

.SILENT: