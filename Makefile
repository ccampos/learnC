CFLAGS=-Wall -g

all: clean c6

c1:
	make ex1
	./ex1

c3:
	make ex3
	./ex3

c4:
	make ex4
	./ex4

c6:
	make ex6
	valgrind ./ex6

clean:
	rm -rf ex6.dSYM
	rm -f ex6
