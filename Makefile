CC=g++
LD=g++
CFLAGS=-Iinclude
LDFLAGS=-lGL -lGLU -lsfml-graphics -lGLEW

ships: main.o Game.o WaterShader.o
	$(LD) -o ships main.o Game.o WaterShader.o $(LDFLAGS)

main.o: main.cpp
	$(CC) $(CFLAGS) -o main.o -c main.cpp

Game.o: Game.cpp include/Game.hpp
	$(CC) $(CFLAGS) -o Game.o -c Game.cpp

WaterShader.o: WaterShader.cpp include/WaterShader.hpp
	$(CC) $(CFLAGS) -o WaterShader.o -c WaterShader.cpp

.PHONY: clean
clean:
	rm -rf *.o ships