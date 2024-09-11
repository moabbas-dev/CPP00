NAME = phonebook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Contacts.cpp Phonebook.cpp

OBJCS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJCS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJCS)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJCS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
