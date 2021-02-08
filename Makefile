##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile
##

SRC     =	parallax.c	\
			create_object.c	\
			main.c	\
			display_windows.c	\
			moove_ddr.c	\
			wait_a_bit.c	\
			moove_rect.c	\
			moove_all.c	\
			music_start.c	\
			create_obstacle.c	\
			manage_back.c	\
			moove_obstacle.c	\
			event_handle.c	\
			handle_jump.c	\
			does_it_touch.c	\
			moove_pos.c	\
			is_it_win.c	\
			my_putchar.c	\
			my_putstr.c	\
			death_sound.c	\
			create_obstacle1.c	\
			text_manage.c	\
			my_getstr.c	\
			my_revstr.c	\
			my_strcat.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -l csfml-graphics -l csfml-window -l csfml-system -l csfml-audio -g3

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
