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
    x = (c - b) / a;
    cout << "Gia tri x = " << x << endl;

    return 0;
}