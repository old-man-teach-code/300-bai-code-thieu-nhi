#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n;
    cout << "Nhap vao so can kiem tra: ";
    cin >> n;
    unsigned int i = sqrt(n);
    if (n == i * i)
    {
        cout << "La so chinh phuong";
    }
    else
    {
        cout << "Khong phai so chinh phuong";
    }
    return 0;
}