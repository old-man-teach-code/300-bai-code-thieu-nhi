#include <iostream>
using namespace std;

int main()
{
    int i, j, tich;
    cout << "Nhap vao so i =";
    cin >> i;
    tich = 0;

    for (j = 1; j <= 10; j++)
    {
        tich = i * j;
        cout << i << "x" << j << "=" << tich << endl;
    }
    return 0;
}