NAME = zombie
CXX = clang++
CXXFLAG = -Wall -Wextra -Werror -std=c++98
SRCS = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
OBJ = $(SRCS:.cpp=.o)

OBJS	= ${SRCS:%.cpp=%.o}

$(NAME)	: $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@ 

all		: $(NAME)

clean	: 
			@rm -rf $(OBJ)

fclean	: clean
			@rm -rf $(NAME)

re		: fclean
		make all

.PHONY	: all clean fclean re