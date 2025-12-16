NAME = Harl
C++ = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = $(FILES)

FILES = main.cpp Harl.cpp \

HEADER = Harl.hpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(C++) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all