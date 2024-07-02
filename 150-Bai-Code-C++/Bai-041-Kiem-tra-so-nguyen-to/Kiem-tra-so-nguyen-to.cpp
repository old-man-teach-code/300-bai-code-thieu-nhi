#include "math.h"
#include "iostream"
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    bool la_so_nguyen_to = false;
    if (n < 2)
    {
        la_so_nguyen_to = false;
    }
    else
    {
        int i;
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                la_so_nguyen_to = false;
                break;
            }
        }
        if (i > sqrt(n))
            la_so_nguyen_to = true;
    }
    if (la_so_nguyen_to == true)
        cout << "So " << n << " la so nguyen to";
    else
        cout << n << " khong phai la so nguyen to";
    ;
    cout << endl;
    return 0;
}