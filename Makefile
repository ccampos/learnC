CFLAGS=-Wall -g

all: clean c1

c1:
	cc -Wall -g ex1.c -o ex1

clean:
	rm -rf ex1.dSYM
	rm -f ex1