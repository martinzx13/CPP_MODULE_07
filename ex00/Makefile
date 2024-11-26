#Rules.

CPP := c++

# Flags.
CPP_FLAGS := -Wall -Wextra -Werror -std=c++98

# Name of the executable.
NAME:= template

#Sources files.

SRC:= main.cpp

OBJ:= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPP_FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
