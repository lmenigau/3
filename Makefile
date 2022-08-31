NAME = claptrap
CXXFLAGS = -g -std=c++98 -Wall -Wextra -Werror  
CXX = c++

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

include $(SRC:.cpp:.d)
%.d: %.c
	set -e; rm -f $@; \
	$(CC) -MM $(CPPFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

clean:
	$(RM) *.o *.d $(NAME)
