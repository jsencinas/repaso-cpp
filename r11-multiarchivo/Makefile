CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g
OBJ      = main.o Punto.o

executable: $(OBJ)
		$(CXX) $(OBJ) -o executable.out
	 
main.o: main.cpp Punto.h
	$(CXX) $(CXXFLAGS) -c main.cpp
	
punto.o: Punto.cpp Punto.h
	$(CXX) $(CXXFLAGS) -c punto.cpp
	
clean:
	rm -f $(OBJ) executable.out 