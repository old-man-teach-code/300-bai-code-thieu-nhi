#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int n;
    cout << "Nhap vao so n = ";
    cin >> n;
    double res = 1.0;
    double temp = 1.0;
    for (int i = 0; i <= n; i++)
    {
        temp *= (2.0 * (i + 1.0)) / (2.0 * i + 3.0);
        res += temp;
    }
    printf("Ket qua = %.2f", res);
    return 0;
}