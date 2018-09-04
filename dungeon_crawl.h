#include <iostream>
#include <vector>

using namespace std;

class Dungeon
{
    public:
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

    private:

        int rows = 0, columns = 0, monsters = 3;
        
//        void init_dungeon(int, int, int);
//        void print_dungeon();

};
