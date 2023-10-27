#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "Podaj liczbe: \n";
	cin >> N;

	int z = 0;
	int j = 1;

	if (N == 0)
	{
		cout << z;
	}

	if (N == 1)
	{
		cout << j;
	}

	int wynik = 0;

	for (int i = 2; i <= N; i++)
	{
		wynik = z + j;
		z = j;
		j = wynik;
	}

	if (wynik != 0) 
	{
		cout << wynik;
	}
}