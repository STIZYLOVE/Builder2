#include <iostream>

#include "windows.h"

#include "director.h"
#include "carBuilder.h"
#include "carManualBuilder.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    CarManualBuilder* carManualBuilder = new CarManualBuilder();
    Director* director = new Director();
    director->MakeSportCar(carManualBuilder);
    Manual* manual = carManualBuilder->GetResult();
    manual->ReadInstructions();

    return 0;
}
