#include <iostream> 
#include <cctype>   
using namespace std;
int main() {
    setlocale(0, "");
    char Letter;
    cout << " Введите любую букву: ";
    for (;;) {
        Letter = getchar();
        if (Letter == '\n')
            break;
        if (islower(Letter))
            cout << "Буква " << Letter << " прописная." << endl;
        else
            cout << "буква " << Letter << " заглавная." << endl;
    }
    return 0;
}