NAME = rush-02

SOURCES = main.c \
	ft_split_space.c \
	parse_number.c \
	convert_in_num.c \
	million.c \
	rush02.c \
	library.c \
	readandwrite.c \

OBJECTS = $(SOURCES:.c=.o)

CLFAGS += -Wall -Werror -Wextra

$(NAME): $(OBJECTS)
	$(CFLAGS) -o $(NAME) $(OBJECTS)

fclean :
	rm -rf *.o
	rm -r $(NAME)
