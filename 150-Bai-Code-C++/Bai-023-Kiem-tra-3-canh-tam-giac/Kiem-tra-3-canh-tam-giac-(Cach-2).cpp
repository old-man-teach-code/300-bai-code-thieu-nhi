#include <iostream>
#include <math.h>
#define swap(a, b)    \
    {                 \
        double t = a; \
        a = b;        \
        b = t;        \
    }
// #define swap( a, b ) { double t = a; a = b; b = t; }
#define eps 1e-10

using namespace std;
int main()
{
    double a, b, c;
    cout << "Nhap 3 canh tam giac: ";
    cin >> a >> b >> c;
    /* sắp xếp sao cho: a  b  c */
    if (a > b)
        swap(a, b);
    if (a > c)
        swap(a, c);
    if (b > c)
        swap(b, c);
    if (a > 0 && a + b > c)
    {
        /* nếu a = c thì a = b */
        if (a == c)
            cout << "Tam giac deu\n";
        /* nếu tam giác vuông, c
		2 - a
		2 = b2 */

        else if (fabs((c + a) * (c - a) - b * b) < eps)
            if (a == b || b == c)
                cout << "Tam giac vuong can\n";
            else
                cout << "Tam giac vuong\n";
        else if (a == b || b == c)
            cout << "Tam giac can\n";
        else
            cout << "Tam giac thuong\n";
        double p = (a + b + c) / 2;
        cout << "Dien tich S = " << sqrt(p * (p - a) * (p - b) * (p - c));
    }
    else
        cout << "Khong hop le\n";
    return 0;
}