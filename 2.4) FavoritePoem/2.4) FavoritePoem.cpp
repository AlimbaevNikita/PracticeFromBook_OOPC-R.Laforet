#include <iostream>
#include <iomanip>

int main()
{
    setlocale(0, "");

    std::cout << std::setw(80) << "Достигая желаемой высоты," << std::endl
             << std::setw(80) << "\tОчень трудно быть собранным… На бегу," << std::endl
             << std::setw(80) << "\tПеред тем, как поджечь за собой мосты, " << std::endl
             << std::setw(80) << "Убедись, а на том ли ты берегу." << std::endl
        ;
}
