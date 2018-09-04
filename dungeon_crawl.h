#ifndef DUNGEON_CRAWL
#define DUNGEON_CRAWL

#include <iostream>
#include <vector>


using namespace std;

class Dungeon
{
    public:
        static constexpr char EMPTY_SPACE = '+',
                              MONSTER = 'x',
                              PLAYER = 'o';
        vector<vector<char>> map;

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
        bool check_move(int, int);

    private:

        int rows = 0, columns = 0, monsters = 3;
        
//        void init_dungeon(int, int, int);
//        void print_dungeon();

};

class Character
{
    public:
        int position[2];

        Character()
        {
            position[0] = 0;
            position[1] = 0;
        };

        Character(int x, int y)
        {
            position[0] = x;
            position[1] = y;
        };

        void move(int);
};

class Player : public Character
{
    public:
        Player()
        {
            position[0] = 0;
            position[1] = 0;
        };

        Player(int x, int y)
        {
            position[0] = x;
            position[1] = y;
        };

        int get_move();
};

#endif 
