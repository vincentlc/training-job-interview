CC = gcc
CFLAGS = -Wall -g -I./src

all: two_sum

two_sum: src/two_sum.c test/main.c
	$(CC) $(CFLAGS) -o two_sum src/two_sum.c test/main.c

clean:
	rm -f two_sum

# Run the program
run: two_sum
	./two_sum
