#include <iostream>

using namespace std;
int main()
{
    float a1, b1, c1, a2, b2, c2, dx, dy, d;
    cout << "Nhap a1, b1, c1: ";
    cin >> a1 >> b1 >> c1;
    cout << "Nhap a2, b2, c2: ";
    cin >> a2 >> b2 >> c2;
    d = (a1 * b2 - a2 * b1);
    dx = (c1 * b2 - c2 * b1);
    dy = (a1 * c2 - a2 * c1);
    if (d == 0)
    {
        if (dx == 0 && dy == 0)
        {
            cout << "Vo dinh\n";
        }
        else
            cout << "Vo nghiem\n";
    }
    else
    {
        cout << "x = " << dx / d << "\n y = " << dy / d;
    }
    return 0;
}