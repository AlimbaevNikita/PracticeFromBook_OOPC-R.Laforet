#include <iostream> 
#include <cctype>   
using namespace std;
int main() {
    setlocale(0, "");
    char Letter;
    cout << " ������� ����� �����: ";
    for (;;) {
        Letter = getchar();
        if (Letter == '\n')
            break;
        if (islower(Letter))
            cout << "����� " << Letter << " ���������." << endl;
        else
            cout << "����� " << Letter << " ���������." << endl;
    }
    return 0;
}