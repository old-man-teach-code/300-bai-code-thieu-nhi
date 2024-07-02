#include <iostream>

using namespace std;
int main()
{
    cout << "Nhap lan luot, ngay > thang > nam :";
    int a, b, c;
    cin >> a >> b >> c;
    if ((c >= 1900) && ((((c % 400 == 0) || (c % 4 == 0 && c % 100 != 0)) && a == 29 && b == 2) || ((b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) && a < 32) || (b == 2 && a < 29) || ((b == 4 || b == 6 || b == 9 || b == 11) && a < 31)))
        cout << "Hop le";
    else
        cout << "Khong hop le";
    return 0;
}