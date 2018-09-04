#include <iostream>
#include <vector>

#include "dungeon_crawl.h"

using namespace std;

void Dungeon::init_dungeon(int rows, int columns, int monsters)
{
    map.resize(rows, vector<char>(columns, EMPTY_SPACE));
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
    cout << endl;
}

bool Dungeon::check_empty(int x, int y)
{
    if (map[y][x] == 
}

bool Dungeon::check_move(int x, int y)
{
    if (x < 0 || y < 0 || x >= rows || y >= columns)
        return false;
    return true;  
}
    
int Player::get_move()
{
    char move = '';
    cout << ">> ";
    move = getchar();
    while (1)
    {
        switch(move)
        {
            case 'l' : return 0;
            case 'u' : return 1;
            case 'r' : return 2;
            case 'd' : return 3;
            default : cout << "Please enter direction" << endl;
        }
    }
}    


