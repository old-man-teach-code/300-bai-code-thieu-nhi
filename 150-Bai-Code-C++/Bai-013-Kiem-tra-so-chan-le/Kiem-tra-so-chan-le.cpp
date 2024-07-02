#include <iostream>

using namespace std;
int main()
{
    int x;
    cout << "Nhap so can kiem tra ";
    cin >> x;
    if (x % 2 == 0)
    {
        cout << "So nhap vao la so chan";
    }
    else
    {
        cout << "So nhap vao la so le";
    }
    return 0;
}