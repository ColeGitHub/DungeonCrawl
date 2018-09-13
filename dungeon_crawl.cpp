#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#include "dungeon_crawl.h"

using namespace std;

constexpr char Dungeon::EMPTY_SPACE, Dungeon::PLAYER, Dungeon::MONSTER;

void Dungeon::init_dungeon(int rows, int columns, int monsters)
{
    map.resize(rows, vector<char>(columns, EMPTY_SPACE));
    players.resize( monsters + 1 );
    
    players.push_back( Character player );
    for (int i = 0; i < monsters; i++ )
    {
        players.push_back( new Monster(2*i, 2*i));
    }
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
    map[Dungeon::player.get_previous_y()][Dungeon::player.get_previous_x()] = EMPTY_SPACE;
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

    c.set_previous_x();
    c.set_previous_y();

    while (1)
    {
        cout << ">> ";
        cin >> move;
        
        switch(move)
        {
            case 'a' : (x - 1) < 0 ? x = x : x -= 1; 
                       c.set_x(x);
                       return;
            case 'w' : (y - 1) < 0 ? y = y : y -= 1; 
                       c.set_y(y);
                       return;
            case 'd' : (x + 1) == columns ? x = x : x += 1; 
                       c.set_x(x);
                       return;
            case 's' : (y + 1) == rows ? y = y : y += 1; 
                       c.set_y(y);
                       return;
            case 'e' : quit = 1;
                       return;
            default : cout << "Please enter direction or E to exit" << endl;
        }
    }
}

void Dungeon::move(Monster &m)
{
    int move;
    int x = m.get_x();
    int y = m.get_y();
    bool move_finished = false;

    srand(time(NULL));

    m.set_previous_x();
    m.set_previous_y();

    while (!move_finished)
    {
        move = (rand() % 4);

        switch(move)
        {
            case 0 : (x - 1) < 0 ? move_finished = true : x -= 1; 
                       move_finished = !move_finished;
                       break;
            case 1 : (y - 1) < 0 ? move_finished = true : y -= 1; 
                       move_finished = !move_finished;
                       break;
            case 2 : (x + 1) == columns ? move_finished = true : x += 1; 
                       move_finished = !move_finished;
                       break;
            case 3 : (y + 1) == rows ? move_finished = true : y += 1; 
                       move_finished = !move_finished;
                       break;
            default : break; 
        }
    }

    m.set_x(x);
    m.set_y(y);
}

void Dungeon::move_players()
{
    for (int i = 0; i < players.size(); i++)
    {
        move(players[i]);
    }
}
