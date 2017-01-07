CC=gcc
CFLAGS=-Wall -g -I.
DEPS=main.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: menu main.c
	$(CC) $(CFLAGS) append.o print.o menu.o main.c -o main

menu: append.o print.o
	$(CC) $(CFLAGS) menu.c -c

clean:
	rm -f *.o

dist-clean: clean
	rm -r main
