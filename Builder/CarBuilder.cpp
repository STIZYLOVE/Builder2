#include "car.h"
#include "carBuilder.h"

void CarBuilder::Reset()
{
    result = new Car();
}
void CarBuilder::SetSeats(unsigned short number)
{
    result->seats = number;
}
void CarBuilder::SetEngine(Engine* engine)
{
    result->engine = engine;
}
void CarBuilder::SetABS()
{
    result->ABS = true;
}
void CarBuilder::SetGPS()
{
    result->GPS = true;
}
void CarBuilder::SetWheels(unsigned short number)
{
    result->wheels = number;
}
Car* CarBuilder::GetResult()
{
    return result;
}

