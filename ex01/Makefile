# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/12 08:26:09 by bguyot            #+#    #+#              #
#    Updated: 2022/05/13 07:48:46 by bguyot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook

INC_DIR	=	./inc/
SRC_DIR	=	./src/

SRC_FIL	=	main.cpp Contact.cpp PhoneBook.cpp

SRCS	=	$(addprefix $(SRC_DIR),$(SRC_FIL))

OBJS	=	$(SRCS:.cpp=.o)

CCXX	=	@c++
CXXFLAGS=	-Wall -Wextra -Werror -std=c++98
RM		=	@rm -rf

.cpp.o:
	 $(CCXX) -c $(CXXFLAGS) -o $@ $<

all:	$(NAME)

$(NAME): $(OBJS)
	$(CCXX) $(FLAGSXX) -o $(NAME) $(OBJS)
	@printf "\e[36m\tCompilation \t[ ✓ ]\n\e[39m"

clean:
	$(RM) $(OBJS)
	@printf "\e[31m\tClean \t\t[ ✓ ]\n\e[39m"

fclean: clean
	$(RM) $(NAME)
	@printf "\e[35;5;161m\tBinary Clean \t[ ✓ ]\n\e[39m"

re: fclean all

.PHONY: all clean fclean re
