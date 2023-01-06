# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 22:14:38 by zkasmi            #+#    #+#              #
#    Updated: 2022/02/01 18:41:09 by zkasmi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME2 = checker

RED=\033[0;31m

YELLOW=\033[1;33m

GREEN=\033[0;32m

GREY=\x1b[30m

RED=\x1b[31m

GREEN=\x1b[32m

YELLOW=\x1b[33m

BLUE=\x1b[34m

PURPLE=\x1b[35m

CYAN=\x1b[36m

WHITE=\x1b[37m

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC_PUSH_SWAP = push_swap.c

SRC_CHECKER = ./checks/checker.c

SRC_F = ./gnl/get_next_line.c\

SRC =  bigsort.c\
	check.c\
	error.c\
	find.c\
	index.c\
	len.c\
	movements.c\
	movements2.c\
	push.c\
	sorting.c\
	
SRC_B =  ./checks/file.c\
	./checks/file2.c\
	./checks/file3.c\
	./checks/file4.c\
	./checks/file5.c\
	./checks/file6.c\
	./checks/file7.c\

OBJS_F = ${SRC_F:.c=.o}

OBJS = ${SRC:.c=.o}

OBJS_B = ${SRC_B:.c=.o}

OBJS_PUSH_SWAP = ${SRC_PUSH_SWAP:.c=.o}

OBJS_CHECKER = ${SRC_CHECKER:.c=.o}

lib_OBJ = ./Libft/*.o

all: Lib $(NAME)

bonus: all $(NAME2)

%.o: %.c push_swap.h checker.h
			@-${CC} -c ${CFLAGS} -o $@ $<
			@printf "${BLUE}\e[1mMaking files please wait....\e\n"
			
$(NAME)	: $(OBJS_PUSH_SWAP) $(OBJS) $(OBJS_F)
		@-cc $(CFLAGS) $(OBJS_PUSH_SWAP) $(OBJS) $(OBJS_F) $(lib_OBJ) -o $(NAME)
		@printf "${GREEN}\e[1mSuccess making Checker ....\e\n"
		@printf "${GREY}\e[1mTo compile ./checker [Numbers]\e\n"
		
$(NAME2) : $(OBJS_CHECKER) $(OBJS_B) $(OBJS_F)
		@-cc $(CFLAGS) $(OBJS_CHECKER) $(OBJS_B) $(OBJS_F) $(lib_OBJ) -o $(NAME2)
		@printf "${GREEN}\e[1mSuccess making Checker ....\e\n"
		@printf "${GREY}\e[1mTo compile ./checker [Numbers]\e\n"
		
Lib:
	@$(MAKE) -C Libft
	
Libclean:
	@$(MAKE) -C Libft clean

Libfclean:
	@$(MAKE) -C Libft fclean
		
.PHONY: all clean fclean bonus

clean 	: Libclean
	@rm -f $(OBJS_PUSH_SWAP) $(OBJS_CHECKER) $(OBJS) $(OBJS_F) $(OBJS_B)
	@printf "${YELLOW}\e[1mI got it for u Siiiir >.<\e\n"
	
fclean	: Libfclean clean
	@rm -f $(NAME) $(NAME2)
	@printf "${YELLOW}\e[1mI got everything for u Siiir <3<3\e\n"


re		: fclean  all