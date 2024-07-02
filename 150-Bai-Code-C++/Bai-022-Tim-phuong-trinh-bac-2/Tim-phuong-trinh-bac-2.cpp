#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    float a, b, c, d, x1, x2;
    cout << "Nhap he so a, b, c cua phuong trinh bac 2 tuong ung : " << endl;
    cin >> a >> b >> c;
    if (a == 0)
    {
        if (b == 0)
            cout << "Ca a va b khong the bang 0 trong phuong trinh bac 2"
                 << "\n";
        else
        {
            d = -c / b;
            cout << "Phuong trinh co nghiem duy nhat : " << d << endl;
        }
    }
    else
    {
        d = b * b - 4 * a * c;
        if (d > 0)
            x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Nghiem thu nhat x1 = " << x1 << endl;
        cout << "Nghiem thu hai x2 = " << x2 << endl;
    }
    return 0;
}