#include <iostream>

using namespace std;

int main()
{
    cout << "Nhap vao 3 so bat ky:";
    int a1, a2, a3, max;
    cin >> a1 >> a2 >> a3;

    max = a1;

    if (max < a2)
        max = a2;

    if (max < a3)
        max = a3;

    cout << "So lon nhat trong 3 so la: " << max;

    return 0;
}