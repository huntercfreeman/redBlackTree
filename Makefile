CC=gcc
CFLAGS=-Wall -g

all: mainapp

mainapp: main.o redBlackTree.o stringBuilder.o
	$(CC) $(CFLAGS) main.o redBlackTree.o stringBuilder.o -o mainapp

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

redBlackTree.o: redBlackTree.c
	$(CC) $(CFLAGS) -c redBlackTree.c

stringBuilder.o: stringBuilder.c
	$(CC) $(CFLAGS) -c stringBuilder.c

clean:
	rm a.out *.o mainapp
