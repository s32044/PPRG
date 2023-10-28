#include <iostream>
using namespace std;

int main()
{
    int podstawa, wykladnik;
    int wynik = 1;
    
    cout << "Podaj podstawe: ";
    cin >> podstawa;
    cout << "Podaj wykladnik: ";
    cin >> wykladnik;

    for (int i = 0; i < wykladnik; i++)
    {
        wynik *= podstawa;
    }
    cout << "Wynik to: " << wynik << endl;
    return 0;
}