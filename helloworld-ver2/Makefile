CC = gcc
CFLAGS = -g
DEPS = reciprocal.h
OBJ = reciprocal.o main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

reciprocal: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -fr *.o reciprocal

.PHONY: clean
