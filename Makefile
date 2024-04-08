CXX := g++
CXXFLAGS := -Wall -std=c++11

SRCS := main.cpp Object.cpp Item.cpp
OBJS := $(SRCS:.cpp=.o)

EXEC = exe

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean
clean:
	rm -f $(OBJS) $(EXEC) *.o