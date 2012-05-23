CC=g++
LD=g++
CFLAGS=-Iinclude
LDFLAGS=-lGL -lGLU -lsfml-graphics

ships: main.o Game.o
	$(LD) -o ships main.o Game.o $(LDFLAGS)

main.o: main.cpp
	$(CC) $(CFLAGS) -o main.o -c main.cpp

Game.o: Game.cpp include/Game.hpp
	$(CC) $(CFLAGS) -o Game.o -c Game.cpp