#ifndef DUNGEON_CRAWL
#define DUNGEON_CRAWL

#include <iostream>
#include <vector>

#include "character.h"

using namespace std;

class Dungeon
{
    public:
        static constexpr char EMPTY_SPACE = '+',
                              MONSTER = 'x',
                              PLAYER = 'o';
        vector<vector<char>> map;
        int rows = 0, columns = 0, monsters = 3, quit = 0;
        Player p ();

        Dungeon()
        {
            rows = 10;
            columns = 10;
            init_dungeon(rows, columns, monsters);
        };

        Dungeon(int rows, int columns, int monsters)
        {
            this->rows = rows;
            this->columns = columns;
            init_dungeon(this->rows, this->columns, monsters);
        };

        void init_dungeon(int, int, int);
        void print_dungeon();
        bool check_empty(int, int);
        void move(Player);

    private:

//        int rows = 0, columns = 0, monsters = 3;
        
//        void init_dungeon(int, int, int);
//        void print_dungeon();

};



#endif 
