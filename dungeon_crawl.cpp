#include <iostream>
#include <vector>

#include "dungeon_crawl.h"

using namespace std;

constexpr char Dungeon::EMPTY_SPACE, Dungeon::PLAYER, Dungeon::MONSTER;

void Dungeon::init_dungeon(int rows, int columns, int monsters)
{
    map.resize(rows, vector<char>(columns, EMPTY_SPACE));
    map 
    map[3][0] = PLAYER;
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

   
void Dungeon::move(Player p) 
{
    char move;

    while (1)
    {
        cout << ">> ";
        move = getchar();
        
        switch(move)
        {
            case 'a' : (position[0] - 1) < 0 ? : position[0] -= 1; 
                       return;
            case 'w' : (position[1] - 1) < 0 ? : position[1] -= 1; 
                       return;
            case 'd' : (position[0] + 1) == columns ? : position[0] += 1; 
                       return;
            case 's' : (position[1] + 1) == rows ? : position[1] += 1; 
                       return;
            case 'e' : quit = 1;
                       return;
            default : cout << "Please enter direction or E to exit" << endl;
        }
    }
}

void Dungeon::move(Monster m)
{

}

int Player::get_move(Dungeon d)
{
    char move;
    cout << ">> ";
    move = getchar();
    while (1)
    {
        switch(move)
        {
            case 'a' : (position[0] - 1) < 0 ? : position[0] -= 1; 
                       break;
            case 'w' : (position[1] - 1) < 0 ? : position[1] -= 1; 
                       break;
            case 'd' : (position[0] + 1) == d.columns ? : position[0] += 1; 
                       break;
            case 's' : (position[1] + 1) == d.rows ? : position[1] += 1; 
                       break;
            default : cout << "Please enter direction" << endl;
        }
    }
}    


