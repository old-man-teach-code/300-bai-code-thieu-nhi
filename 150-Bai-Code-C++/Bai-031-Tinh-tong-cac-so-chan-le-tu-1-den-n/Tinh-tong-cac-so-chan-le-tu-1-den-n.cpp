#include <iostream>

using namespace std;
int main()
{
    int n, option, s = 0;
    cout << "Nhap vao so n =";
    cin >> n;
    cout << "Nhap 1 de tinh tong cac so chan \nNhap 0 de tinh tong cac so le: ";
    cin >> option;
    if (option == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                s += i;
            }
        }
    }
    else if (option == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                s += i;
            }
        }
    }
    else
    {
        cout << "Sai lua chon! Ban chi co the chon 1 hoac 0";
    }

    return 0;
}