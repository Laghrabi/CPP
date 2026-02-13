NAME = Form
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = $(FILES)

FILES = main.cpp Bureaucrat.cpp AForm.cpp  ShrubberyCreationForm.cpp  PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp \

HEADER = Bureaucrat.hpp AForm.hpp  ShrubberyCreationForm.hpp  PresidentialPardonForm.hpp RobotomyRequestForm.hpp Intern.hpp \

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all