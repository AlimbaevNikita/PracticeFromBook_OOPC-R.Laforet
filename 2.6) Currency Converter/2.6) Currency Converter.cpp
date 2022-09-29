#include <iostream>
#include "Header.h"

using namespace std;
int main()
{
    float DollarInput;
    const float Pound = 1.487, 
                Frank = 0.172,
                GermanMark = 0.584,
                JapaneseYen = 0.00955;

    DollarInputFunction(); cin >> DollarInput;
    PrimaryIndentation(); cout << DollarInput; DollarEquals(); cout << DollarInput / Pound;PoundEquals(); 
                          DollarInput / Frank; FrankEquals(); cout << DollarInput / GermanMark; 
                          GermanMarkEquals(); cout << DollarInput / JapaneseYen; JaponYenEquals();
}
