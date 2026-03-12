#pragma once
#include <iostream>
#include "engine.h"

using namespace std;

class Car
{
    public:
        unsigned short wheels = 0;
        unsigned short seats = 0;

        bool ABS = false;
        bool GPS = false;

        Engine* engine = nullptr;

        void Drive()
        {
            cout << "Я машина, еду со скоростью: " << engine->GetHorsePowers() << endl;
        }
};