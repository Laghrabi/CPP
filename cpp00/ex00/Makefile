NAME = megaphone
C++ = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = $(FILES)

FILES = megaphone.cpp \

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all