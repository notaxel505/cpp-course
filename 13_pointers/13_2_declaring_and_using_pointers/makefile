# Name of the C++ compiler
CXX = g++

# Compiler options
CXXFLAGS = -Wall -std=c++23

# Source file and target executable name
SRC = main.cpp
TARGET = main

# Default rule (runs when you just type 'make')
all: $(TARGET)

# How to build the target executable
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Rule to clean up the generated file
clean:
	rm -f $(TARGET)
