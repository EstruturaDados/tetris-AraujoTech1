CC=gcc
CFLAGS=-Wall -Wextra -std=c11


SRC=src/main.c src/game.c src/queue.c src/stack.c src/snapshot.c


all:
$(CC) $(CFLAGS) $(SRC) -o tetris


clean:
rm -f tetris