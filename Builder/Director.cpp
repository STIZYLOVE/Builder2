#include "director.h"

void Director::MakeSportCar(Builder* builder)
{
    builder->Reset();
    builder->SetABS();
    builder->SetEngine(new Engine(200));
    builder->SetSeats(2);
    builder->SetWheels(4);
}
void Director::MakeLimusin(Builder* builder)
{
    builder->Reset();
    builder->SetGPS();
    builder->SetEngine(new Engine(120));
    builder->SetSeats(10);
    builder->SetWheels(6);
}
