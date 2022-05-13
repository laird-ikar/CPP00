# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 07:52:21 by bguyot            #+#    #+#              #
#    Updated: 2022/03/31 07:56:10 by bguyot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= ex02

SRC			= Account.cpp test.cpp
OBJ			= $(SRC:.cpp=.o)

CCXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -f
LIBS		=

all: $(NAME)

$(NAME): $(OBJ)
	$(CCXX) $(CXXFLAGS) -o $(NAME) $(LIBS) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
