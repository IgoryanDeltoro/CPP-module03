TARGET := claptrap
CXX := c++
STD := -std=c++98
CFLAGS := -Wall -Wextra -Werror $(STD)
RM := rm -rf
SRC := main.cpp ClapTrap.cpp
OBJ := $(SRC:%.cpp=%.o)
DEPS := $(OBJ:%.o=%.d)
all: $(OBJ)
$(TARGET): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(TARGET)
%.o: %.cpp
	$(CXX) $(CFLAGS) -MMD -MP -c $< -o $@
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(TARGET) $(DEPS)
.PHONY: all clean fclean
-include $(DEPS)