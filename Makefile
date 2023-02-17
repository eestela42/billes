NAME = Billes

CC = g++

CFLAGS = 

SRC = main.cpp bille.cpp vector.cpp zone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 $(CFLAGS) -o $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

po: all clean

re: fclean all

.PHONY: all re clean fclean