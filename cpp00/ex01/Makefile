NAME = phonebook
C++ = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp $(FILES)

FILES = contact.cpp PhoneBook.cpp \

HEADER = contact.hpp PhoneBook.hpp \

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(C++) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all