CC = gcc

CFLAGS = -Wall -Wextra -std=c17 -Iinclude

SRC = src/*.c

TARGET = bin/sudoku

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

rebuild: clean all