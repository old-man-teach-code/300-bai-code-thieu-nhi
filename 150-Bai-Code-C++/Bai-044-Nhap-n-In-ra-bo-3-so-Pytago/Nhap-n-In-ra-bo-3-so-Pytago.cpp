#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, a, b, x, y, i, j, k, l, tong;
    cout << "Nhap vao so n =";
    cin >> n;
    a = 1;
    b = 0;
    if (n < 5)
        cout << -1;
    else
    {
        for (i = 1; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                double z = sqrt(i * i + j * j);
                if ((int)z == z && (z < n || z == n))
                    cout << i << " " << j << " " << (int)z << endl;
            }
        }
    }
}