#include <iostream>

#include "character.h"

int Character::get_move(Dungeon d)
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

int Character::get_x()
{
    return this->position[0];
}

int Character::get_y()
{
    return this->position[1];
}
