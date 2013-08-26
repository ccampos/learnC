CFLAGS=-Wall -g

all: clean c4

c1:
	make ex1
	./ex1

c3:
	make ex3
	./ex3

c4:
	make ex4
	./ex4

clean:
	rm -rf ex1.dSYM
	rm -f ex1