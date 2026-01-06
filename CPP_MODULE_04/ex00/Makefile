NAME = ScavTrap
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = $(FILES)

FILES = main.cpp Cat.cpp  Dog.cpp WrongCat.cpp WrongAnimal.cpp Animal.cpp \

HEADER = Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Animal.hpp \

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all