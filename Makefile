##
## Makefile for Makefile in /home/ouranos27/my_desktop/CPE/CPE_2016_BSQ_bootstrap
## 
## Made by philippe kam
## Login   <philippe.kam@epitech.eu>
## 
## Started on  Sun Dec 11 20:57:48 2016 philippe kam
## Last update Fri Jan 13 17:06:07 2017 philippe kam
##

CFLAGS  +=      -Wall -Wextra -Werror

SRC     =	infos.c			\
		fs_functions.c		\
		overview.c		\

OBJ     =       $(SRC:.c=.o)

NAME    =	bsq

MAKE_RE =       cd ./lib/my && make re

all:            $(NAME)

$(NAME):        $(OBJ)
		$(MAKE_RE)
		gcc -g $(SRC) -L./lib/my -lmy -o $(NAME) $(CFLAGS)

clean:
		cd ./lib/my && make clean
		rm -f $(OBJ)

fclean:         clean
		cd ./lib/my && make clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		re fclean all
