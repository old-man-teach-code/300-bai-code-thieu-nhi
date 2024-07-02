#include <iostream>
using namespace std;
int main()
{
    unsigned n, i, count, sum;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Cac uoc so: ";
    for (count = sum = 0, i = 1; i <= n; ++i)
        if (n % i == 0)
        {
            cout << i << " ";
            count++;
            sum += i;
        }
    cout << "\nCo " << count << " uoc so, tong la: " << sum;
    return 0;
}