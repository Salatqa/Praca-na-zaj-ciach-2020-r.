/// Suma Cyfr Liczby Ca³kowitej
/// Autor: Salatqa
/// Data: 7.01.2020 r.

#include <iostream>

using namespace std;


int main()
{
    int number, r;
    int sum = 0;

    cin >> number;

    while (number>0)
    {
        r = number % 10;
        sum += r;
        number /= 10;
    }

    cout << sum;

    return 0;
}

