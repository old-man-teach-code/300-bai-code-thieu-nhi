#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Nhap vao so nguyen: ";
    cin >> n;
    i = 0;
    if (n < 100)
    {
        cout << i << endl;
    }
    else
    {
        i = n / 100 % 10;
        cout << i << endl;
    }
    return 0;
}