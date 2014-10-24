CC = gcc
CPP = g++
CFLAGS = -g
DEPS = reciprocal.hpp
OBJ = main.o reciprocal.o

all: reciprocal

reciprocal.o: reciprocal.cpp $(DEPS)
	$(CPP) -c -o $@ $< $(CFLAGS)

main.o: main.c
	$(CC) -c -o $@ $< $(CFLAGS)

reciprocal: $(OBJ)
	$(CPP) -o $@ $^ $(CFLAGS)

clean: 
	rm -rf *.o reciprocal

