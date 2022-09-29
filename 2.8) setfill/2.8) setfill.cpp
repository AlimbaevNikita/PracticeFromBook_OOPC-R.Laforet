#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(0, "");
    long PopulationMoscow = 8425785, PopulationKirov = 425785, PopulationNovosibirsk = 2425785;
    
    cout << "Москва " << setw(9) << setfill('.') << setw(12) << PopulationMoscow << endl
         << "Киров " << setw(9) << setfill('.') << setw(12) << PopulationKirov << endl
        << "Новосибирск " << setw(9) << setfill('.') << setw(12) << PopulationNovosibirsk << endl;
}
