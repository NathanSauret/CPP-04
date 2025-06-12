NAME 	= poly
CPP		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

SRC =	Src/main.cpp	\
		Src/animal.cpp	\
		Src/dog.cpp	\
		Src/cat.cpp	\
		Src/wrong_animal.cpp	\
		Src/wrong_cat.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) -o $(NAME) $(CFLAGS) $(OBJ)
	@clear
	@echo "Compilation done!"

debug: $(OBJ)
	@$(CPP) -o $(NAME) $(CFLAGS) $(OBJ)
	@echo "Compilation done!"

clean:
	@rm -f $(OBJ)
	@clear
	@echo "Cleaning done!"

fclean:
	@rm -f $(OBJ)
	@rm -f $(NAME)
	@rm -rf
	@clear
	@echo "Full cleaning done!"

re: fclean all
	@clear
	@echo "Re:Zero - Re:Clean and compile again."

.PHONY: all clean fclean re