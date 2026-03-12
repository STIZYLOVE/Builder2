#pragma once

#include "builder.h"
#include "car.h"

class CarBuilder : public Builder
{
private:
    Car* result;

public:
    void Reset() override;
    void SetSeats(unsigned short number) override;
    void SetEngine(Engine* engine) override;
    void SetABS() override;
    void SetGPS() override;
    void SetWheels(unsigned short number) override;
    Car* GetResult();
};