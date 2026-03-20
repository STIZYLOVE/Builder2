#include "car.h"
#include "carManualBuilder.h"
#include <string>

void CarManualBuilder::Reset()
{
    result = new Manual();
    result->AddRows("Характеристики автомобиля:");
}
void CarManualBuilder::SetSeats(unsigned short number)
{
    result->AddRows("Кол-во сидений: " + to_string(number));
}
void CarManualBuilder::SetEngine(Engine* engine)
{
    result->AddRows("Кол-во лошадиных сил: " + to_string(engine->GetHorsePowers()));
}
void CarManualBuilder::SetABS()
{
    result->AddRows("Наличие ABS");
}
void CarManualBuilder::SetGPS()
{
    result->AddRows("Наличие GPS");
}
void CarManualBuilder::SetWheels(unsigned short number)
{
    result->AddRows("Кол-во колёс: " + to_string(number));
}
Manual* CarManualBuilder::GetResult()
{
    return result;
}


