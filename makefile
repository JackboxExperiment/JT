all: test.o newstr.o
	gcc -o test test.o newstr.o

test.o: test.c newstr.o
	gcc -c test.c

newstr.o: newstr.c
	gcc -c newstr.c

run:
	./test

clean:
	rm *.o
	rm test