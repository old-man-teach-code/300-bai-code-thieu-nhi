#include <iostream>
using namespace std;

int main()
{
    int a, b, sa = 0, sb = 0;
    cout << "Nhap vao so A va so B: ";
    cin >> a >> b;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sa = sa + i;
        }
    }

    for (int i = 1; i < b; i++)
    {
        if (b % i == 0)
        {
            sb = sb + i;
        }
    }

    if (sa == b && sb == a)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;

    return 0;
}