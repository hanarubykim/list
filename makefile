all: main.o list.o
	gcc -o testing main.o list.o

main.o: list.c headers.h
	gcc -c main.c

linkedList.o: list.c headers.h
	gcc -c list.c

run:
	./testing

clean:
	rm *.o
	rm *~
