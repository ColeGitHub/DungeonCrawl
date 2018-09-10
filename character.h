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

        int get_x();
        int get_y();
};



#endif
