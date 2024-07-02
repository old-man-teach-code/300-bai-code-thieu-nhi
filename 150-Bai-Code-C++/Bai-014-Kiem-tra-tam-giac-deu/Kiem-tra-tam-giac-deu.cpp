#include <iostream>

using namespace std;
int main()
{
    float a, b, c;
    cout << "Nhap 3 canh cua tam giac ";
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0)
    {
        cout << "Khong phai 3 canh tam giac";
    }
    else
    {
        if (a == b && b == c)
        {
            cout << "Tam giac deu";
        }
        else
        {
            if (a == b)
            {
                cout << "Tam giac can";
            }
            else if (b == c)
            {
                cout << "Tam giac can";
            }
            else if (a == c)
            {
                cout << "Tam giac can";
            }
            else
            {
                cout << "Tam giac thuong";
            }
        }
    }

    return 0;
}