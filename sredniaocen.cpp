#include <iostream>
using namespace std;

int main()
{
    int ilosc_ocen;
    double suma = 0.0;

    cout << "Podaj ilosc ocen: ";
    cin >> ilosc_ocen;

    if (ilosc_ocen <= 0)
    {
        cout << "Podaj co najmniej jedna liczbe." << endl;
        return 1;
    }

    for (int i = 1; i <= ilosc_ocen; i++)
    {
        double liczba;
        cout << "Podaj liczbe " << i << ": ";
        cin >> liczba;
        while (liczba < 1 || liczba > 6) {
            cout << "Nieprawidlowa ocena" << endl;
            cout << "Podaj liczbe " << i << ": ";
            cin >> liczba;
        }
            suma = suma + liczba;
    }

    double srednia = suma / ilosc_ocen;
    cout << "Srednia arytmetyczna podanych liczb wynosi: " << srednia << endl;

    return 0;

}
    
