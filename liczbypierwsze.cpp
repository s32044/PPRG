#include <iostream>
using namespace std;

//bool prime(int n)
//{
//    for (int i = 2; i * i <= n; i++)
//    {
//        if (n % i == 0)
//            return false;
//    }
//    return true;
//}

int main() {

    int min = 0;
    int max = 0;

    while (min >= max)
    {

        cout << "Podaj zakres liczb: ";
        cin >> min >> max;

        if (min > max)
            cout << "Podaj najpierw mniejsza liczbe, a potem wieksza!\n";
    }

    for (int i = min; i <= max; i++)
    {
        //    if (prime(i))
        //        cout << i << " ";
        //}
        bool prime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
                prime = false;
        }
        if (prime) cout << i << " "; 
    }
}