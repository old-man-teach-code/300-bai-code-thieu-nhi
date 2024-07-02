#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    double a, b, c;
    cout << "Nhap vao gia tri canh goc vuong thu 1 = ";
    cin >> a;
    cout << "Nhap vao gia tri canh goc vuong thu 2 = ";
    cin >> b;

    c = sqrt(a * a + b * b);
    cout << "Gia tri canh huyen = " << c << endl;

    return 0;
}