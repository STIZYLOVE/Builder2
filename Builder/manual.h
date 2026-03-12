#pragma once

#include <iostream>
#include "engine.h"

using namespace std;

class Manual
{
    private:
        string instructions;
public:
        void AddRows(string row)
        {
            instructions += row + "\n";
        }
        void ReadInstructions()
        {
            cout << instructions << endl;
        }
};