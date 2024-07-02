#include <iostream>
using namespace std;
int main()
{

    double a, b, c, x;
    cout << "Nhap vao gia tri a =";
    cin >> a;
    cout << "Nhap vao gia tri b =";
    cin >> b;
    cout << "Nhap vao gia tri c =";
    cin >> c;
    if (a == 0 && (c - b) == 0)
    {
        cout << "Phuong trinh vo so nghiem " << endl;
    }
    else if (a == 0 && (c - b) != 0)
    {
        cout << "Phuong trinh vo nghiem " << endl;
    }
    else
    {
        x = (c - b) / a;
        cout << "Gia tri x = " << x << endl;
    }

    return 0;
}