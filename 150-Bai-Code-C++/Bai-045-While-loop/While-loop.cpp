#include <iostream>
using namespace std;

int main(void)
{

    int n;
    int i;
    cout << "Nhap n: ";
    cin >> n;
    while (n == -1)
    {

        cout << endl
             << "Nhap lai n: ";
        cin >> n;
    };
    if (n > -100)
    {
        for (i = n; i >= -100; i--)
        {
            cout << i << endl;
        }
    }
    else
    {
        for (i = n; i <= -100; i++)
        {
            cout << i << endl;
        }
    }
    return 0;
}
