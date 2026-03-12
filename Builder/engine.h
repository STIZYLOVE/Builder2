#pragma once

class Engine
{
    private:
        unsigned int HorsePowers;

    public:

        Engine(unsigned int number){ HorsePowers = number;}

        unsigned int GetHorsePowers() { return HorsePowers; }
};