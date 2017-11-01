CC=gcc
CFLAGS=-c -I .


distancia: main.o point.o
	$(CC) -o distancia main.o point.o -I . -lm

main.o: main.c
	$(CC) $(CFLAGS) main.c

point.o: point.c point.h
	$(CC) $(CFLAGS) point.c

clean:
	rm *o distancia
