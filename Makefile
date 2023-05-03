# Set the compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -I./headers

# Define directories
SRCDIR = src
OBJDIR = obj
BINDIR = bin
HEADERDIR = headers

# Get a list of source files and generate corresponding object files
SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRC))

# Define the output binary name
TARGET = $(BINDIR)/my_program

# Default target
all: $(TARGET)

# Rule to create the output binary
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to create object files
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean object files and the binary
.PHONY: clean
clean:
	rm -f $(OBJ) $(TARGET)
