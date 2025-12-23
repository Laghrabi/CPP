NAME = megaphone
CXX = c++
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98
SRC = $(FILES)

FILES = megaphone.cpp \

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $() $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all