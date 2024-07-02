#include <iostream>
using namespace std;
int main()
{

    long int so1, so2, sodaonguoc = 0;
    cout << "Nhap mot so nguyen : " << endl;
    cin >> so1;
    so2 = so1;
    do
    {
        sodaonguoc = sodaonguoc * 10;
        int digit = so1 % 10;
        sodaonguoc += digit;
        so1 /= 10;
    } while (so1);
    cout << "Nhap mot so nguyen bat ky: " << so2 << "." << endl;
    cout << "So nguyen dao nguoc la: " << sodaonguoc << "." << endl;
    return 0;
}