NAME 	= poly
CPP		= c++
CFLAGS	= -Wall -Werror -Wextra -g3 -std=c++98 #-fsanitize=address,undefined

SRC =	Src/main.cpp	\
		Src/AMateria.cpp	\
		Src/Ice.cpp	\
		Src/Cure.cpp	\
		Src/Character.cpp	\
		Src/MateriaSource.cpp	\
		Src/ICharacter.cpp	\
		Src/IMateriaSource.cpp

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