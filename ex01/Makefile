NAME        = Sign
SRC         = main.cpp Bureaucrat.cpp Form.cpp
OBJ         = $(SRC:.cpp=.o)
CPP         = c++
CPPFLAGS    = -Wall -Wextra -Werror -std=c++98
HEADER		= Bureaucrat.hpp Form.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean