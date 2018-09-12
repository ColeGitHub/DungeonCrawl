#ifndef CHARACTER_H
#define CHARACTER_H


class Character
{
    public:
        int position[4];

        Character()
        {
            position[0] = 0;
            position[1] = 0;
            position[2] = 0;
            position[3] = 0;
        };

        Character(int x, int y)
        {
            position[0] = x;
            position[1] = y;
            position[2] = x;
            position[3] = y;
        };

        int get_x() { return this->position[0]; }
        int get_y() { return this->position[1]; }
        int get_previous_x() { return this->position[2]; }
        int get_previous_y() { return this->position[3]; }

        void set_x( int x ) { this->position[0] = x; } 
        void set_y( int y ) { this->position[1] = y; }
        void set_previous_x() { this->position[2] = this->position[0]; }
        void set_previous_y() { this->position[3] = this->position[1]; }
};


#endif
