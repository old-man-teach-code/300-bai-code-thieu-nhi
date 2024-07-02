#include <iostream>

using namespace std;
int main()
{
    int tong = 0;
    for (int i = 1; i <= 100; i++)
    {
        tong += i;
    }
    cout << "Tong tu 1 -> 100 la: " << tong;
    return 0;
}