#include <iostream>
#include "Header.h"

using namespace std;
int main()
{
    float Gallon, EquivalentVolumeFeet;
    const float FeetVolume = 7.481;

    setlocale(0, "");

    EnterNumberGallons(); cin >> Gallon;
    if (Gallon < 7.481) {
        MinimumGallons();
    }
    else {
        EquivalentVolumeFeet = Gallon / FeetVolume;

        EquivalenFeet(); cout << EquivalentVolumeFeet; Point();
    }
}
