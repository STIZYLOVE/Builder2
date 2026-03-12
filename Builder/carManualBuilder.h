#pragma once

#include "builder.h"
#include "manual.h"

class CarManualBuilder : public Builder
{
private:
    Manual* result;

public:
    void Reset() override;
    void SetSeats(unsigned short number) override;
    void SetEngine(Engine* engine) override;
    void SetABS() override;
    void SetGPS() override;
    void SetWheels(unsigned short number) override;
    Manual* GetResult();
};