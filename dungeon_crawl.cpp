#include <iostream>
#include <vector>

#include "dungeon_crawl.h"

using namespace std;

constexpr char Dungeon::EMPTY_SPACE, Dungeon::PLAYER, Dungeon::MONSTER;

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
    if (map[y][x] == EMPTY_SPACE)
        return true;
    return false;
}

   
void Dungeon::move(Character c) 
{
    char move;

    while (1)
    {
        cout << ">> ";
        move = getchar();
        
        switch(move)
        {
            case 'a' : (c.position[0] - 1) < 0 ? : c.position[0] -= 1; 
                       return;
            case 'w' : (c.position[1] - 1) < 0 ? : c.position[1] -= 1; 
                       return;
            case 'd' : (c.position[0] + 1) == columns ? : c.position[0] += 1; 
                       return;
            case 's' : (c.position[1] + 1) == rows ? : c.position[1] += 1; 
                       return;
            case 'e' : quit = 1;
                       return;
            default : cout << "Please enter direction or E to exit" << endl;
        }
    }
}


