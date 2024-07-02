#include <iostream>

using namespace std;
int main()
{
    double xC, yC, R, xM, yM, d;
    cout << "Nhap toa do tam C(xC, yC)? ";
    cin >> xC >> yC;
    cout << "Nhap ban kinh R? ";
    cin >> R;
    cout << "Nhap toa do M(xM, yM)? ";
    cin >> xM >> yM;
    d = R * R - ((xM - xC) * (xM - xC) + (yM - yC) * (yM - yC));
    if (d > 0)
        cout << "M nam trong C()\n";
    else if (d < 0)
        cout << "M nam ngoai C()\n";
    else
        cout << "M nam tren C()\n";
    return 0;
}