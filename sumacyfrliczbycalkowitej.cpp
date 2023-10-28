#include <iostream>
using namespace std;

int main()
{
	int liczbaC;
	int suma = 0;

	cout << "Podaj liczbe calkowita: ";
	cin >> liczbaC;

	int cyfra = 0;

	while (liczbaC != 0)
	{
		cyfra = liczbaC % 10;
		suma += cyfra;
		liczbaC /= 10;
	}
	cout << "Suma cyfr liczby wynosi: " << suma << endl;
	return 0;
}
