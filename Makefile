CC=g++
CFLAGS=-I.
DEPS = dungeon_crawl.h character.h
OBJ = main.o dungeon_crawl.o character.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) 

.PHONY: clean

clean:
	rm -f *.o main
