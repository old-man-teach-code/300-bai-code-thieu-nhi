#include <iostream>

using namespace std;
int main()
{
    int a, b, c, t;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;

    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }

    if (a < c)
    {
        t = a;
        a = c;
        c = t;
    }

    if (b < c)
    {
        t = b;
        b = c;
        c = t;
    }
    cout << "Tang dan: " << c << " " << b << " " << a;
    return 0;
}