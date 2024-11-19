# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 14:33:15 by pledieu           #+#    #+#              #
#    Updated: 2024/11/19 10:27:32 by pledieu          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

# Compilateur et options
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC =	ft_printf.c\
		ft_utils.c\
		ft_handlers.c\
		ft_handlers2.c\
		ft_parser.c\
		ft_utils2.c

OBJ = $(SRC:.c=.o)

# Règle principale
all: $(NAME)

# Création bibliothèque
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "libftprintf.a créé avec succès !"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compilé : "

clean:
	@rm -f $(OBJ)
	@echo "Fichiers objets supprimés."

fclean: clean
	@rm -f $(NAME)
	@echo "Bibliothèque supprimée."

# Recompilation complète
re: fclean all

# Commandes pas liées à des fichiers
.PHONY: all clean fclean re
