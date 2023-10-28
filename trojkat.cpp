#include <iostream>
using namespace std;

int main()
{
	int wysokosc;

	cout << "Podaj wysokosc trojkata: ";
	cin >> wysokosc;

	for (int i = 0; i < wysokosc; i++)
	{
		for (int j = 0; j < wysokosc - i - 1; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < 2 * i + 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
