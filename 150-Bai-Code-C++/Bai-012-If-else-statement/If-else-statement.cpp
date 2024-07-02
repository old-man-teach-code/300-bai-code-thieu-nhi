#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int val;
    cout << "Nhap so: ";
    cin >> val;
    if (val > 0 && val < 10)
    {
        cout << "Thoa man dieu kien > 0 và < 10";
    }
    else
    {
        cout << "Khong thoa man dieu kien > 0 va < 10";
    }

    return 0;
}