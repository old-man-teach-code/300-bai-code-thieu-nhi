#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    long long a, b, x, y, n, i;
    a = 0;
    b = 1;
    cout << "Nhap n: ";
    cin >> n;

    cout << n << " phan tu dau tien cua day Fibonacci la: " << endl;
    cout << endl;
    cout << a << endl;
    cout << b << endl;

    for (i = 1; i <= n - 2; i++)
    {
        x = a + b;
        cout << x << endl;
        y = a;
        a = b;
        b = x;
    }
    return 0;
}