NAME = fragtrap
CXXFLAGS = -g -std=c++98 -Wall -Wextra -Werror
CXX = c++

SRC = main.cpp ClapTrap.cpp FragTrap.cpp
DEPS = $(SRC:.cpp=.d)
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ) $(SRC:.cpp:.d)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o : %.cpp
		$(CXX) $(CXXFLAGS) -c $< ;

%.d: %.cpp
	@set -e; rm -f $@; \
		$(CC) -MM $(CPPFLAGS) $< > $@.$$$$; \
		sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
		rm -f $@.$$$$

include $(DEPS)

clean:
	$(RM) *.o *.d $(NAME)
