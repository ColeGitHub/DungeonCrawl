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
    Dungeon::update_dungeon();

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

void Dungeon::update_dungeon()
{
    // Update to Character vector, iterate through and place 
    // characters on map
    
    map[Dungeon::player.get_y()][Dungeon::player.get_x()] = PLAYER;
}

bool Dungeon::check_empty(int x, int y)
{
    if (map[y][x] == EMPTY_SPACE)
        return true;
    return false;
}

   
void Dungeon::move(Character &c)
{
    char move;
    int x = c.get_x();
    int y = c.get_y();

    while (1)
    {
        cout << ">> ";
        cin >> move;
        
        switch(move)
        {
            case 'a' : (x - 1) < 0 ? : x -= 1; 
<<<<<<< HEAD
                       c.set_x(x);
                       return;
            case 'w' : (y - 1) < 0 ? : y -= 1; 
                       c.set_y(y);
                       return;
            case 'd' : (x + 1) == columns ? : x += 1; 
                       c.set_x(x);
                       return;
            case 's' : (y + 1) == rows ? : y += 1; 
                       c.set_y(y);
                       return;
            case 'e' : quit = 1;
                       return;
            default : cout << "Please enter direction or E to exit" << endl;
        }
    }
}


