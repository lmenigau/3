NAME = claptrap
CXXFLAGS = -g -std=c++98 -Wall -Wextra -Werror
CXX = c++

SRC = main.cpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ) $(SRC:.cpp:.d)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o : %.cpp
		$(CXX) -MMD $(CXXFLAGS) -c $< ;

%.d: %.cpp
		$(CXX) -MMD $(CXXFLAGS) $< ;

$(SRC:.cpp:.d): $(SRC)

$(OBJ): $(SRC:.cpp:.d)

include $(SRC:.cpp:.d)


clean:
	$(RM) *.o *.d $(NAME)
