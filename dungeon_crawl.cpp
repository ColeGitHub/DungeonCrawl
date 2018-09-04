#include <iostream>
#include <vector>

#include "dungeon_crawl.h"

using namespace std;

void Dungeon::init_dungeon(int rows, int columns, int monsters)
{
    map.resize(rows, vector<char>(columns, '+'));
}

void Dungeon::print_dungeon()
{
    for ( int i = 0; i < rows; i++ ) 
    {
        for ( int j = 0; j < columns; j++) 
        {
            cout << map[i][j];
        }
        cout << endl;
    }
}
