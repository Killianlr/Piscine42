NAME = rush-01

SOURCES = main.c \
	ft_clue.c \
	ft_fill_tab.c \
	ft_util.c \

OBJECTS = $(SOURCES:.c=.o)

CLFAGS += -Wall -Werror -Wextra

$(NAME): $(OBJECTS)
	cc -o $(NAME) $(OBJECTS)
fclean :
	rm -rf *.o
	rm -r $(NAME)
