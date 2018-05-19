CXX = clang++-5.0
CXXFLAGS = -std=c++17

all: Main.o
	./main.o
Main.o:
	$(CXX) $(CXXFLAGS) main.cpp -o main.o