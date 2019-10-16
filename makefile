all: main.o
	gcc -o program main.o



run: program
	./program

clean:
	rm *.o
	rm program
