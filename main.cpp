#include <iostream>

#include "dungeon_crawl.h"

using namespace std;

int main( int argc, char** argv )
{
    Dungeon d (10, 20, 0);

    while (d.quit == 0) 
    {
        d.print_dungeon();
        d.move_players();
    }

    return 0;
}




