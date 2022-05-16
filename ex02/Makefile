# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 07:52:21 by bguyot            #+#    #+#              #
#    Updated: 2022/05/13 08:48:55 by bguyot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= tests

SRCS		= Account.cpp test.cpp
OBJS		= $(SRCS:.cpp=.o)

CCXX		= @c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= @rm -f

.cpp.o:
	 $(CCXX) -c $(CXXFLAGS) -o $@ $<

all: $(NAME)

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
