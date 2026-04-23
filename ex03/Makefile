.PHONY: all clean fclean re

NAME = ex03

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
DEPFLAGS = -MMD -MP

ifeq ($(DEBUG), 1)
	CXXFLAGS += -g
endif

SRC += main.cpp
SRC += AMateria.cpp
SRC += Ice.cpp
SRC += Cure.cpp
SRC += Character.cpp

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
