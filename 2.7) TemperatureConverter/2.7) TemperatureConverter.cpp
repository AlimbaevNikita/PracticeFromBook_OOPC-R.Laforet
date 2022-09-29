#include <iostream>
#include "Header.h"

int main()
{
    float TemperatureCelsiusInput, TemperatureFaringate;
    
    setlocale(0, "");
    UserInputTemperature(); std::cin >> TemperatureCelsiusInput;
    TemperatureFaringate = (TemperatureCelsiusInput * 9/5) + 32; 

    TemperatureOutputUser(); std::cout << TemperatureFaringate << std::endl;
}
