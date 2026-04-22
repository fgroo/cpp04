.PHONY: all clean fclean re

NAME = ex00

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
DEPFLAGS = -MMD -MP

SRC += main.cpp 
SRC += Animal.cpp
SRC += Dog.cpp
SRC += Cat.cpp
SRC += WrongAnimal.cpp
SRC += WrongCat.cpp

OBJ = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(DEP)
	rm -f *.gch

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEP)
