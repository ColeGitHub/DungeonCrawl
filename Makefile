CXX=g++
CXXFLAGS=-std=c++11 -Wall -g
DEPS = dungeon_crawl.h character.h
OBJ = main.o dungeon_crawl.o 

%.o: %.c $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

main: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS) 

.PHONY: clean

clean:
	rm -f *.o main
