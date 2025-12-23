NAME = bank
CXX = c++
CXXCXXFLAGS  = -Wall -Wextra -Werror -std=c++98
SRC = $(FILES)

FILES = tests.cpp Account.cpp \

HEADER = Account.hpp \

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CXX) $(CXX) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all