#pragma once

#include "engine.h"

class Builder
{
    public:
        virtual void Reset(){};
        virtual void SetSeats(unsigned short number){};
        virtual void SetEngine(Engine* engine){};
        virtual void SetABS(){};
        virtual void SetGPS(){};
        virtual void SetWheels(unsigned short number){};
};