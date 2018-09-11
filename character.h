#ifndef CHARACTER_H
#define CHARACTER_H


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

        int get_x() { return this->position[0]; }
        int get_y() { return this->position[1]; }
        void set_x( int x ) { this->position[0] = x; } 
        void set_y( int y ) { this->position[1] = y; }
};



#endif
