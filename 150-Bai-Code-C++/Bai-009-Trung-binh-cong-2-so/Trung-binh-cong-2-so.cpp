#include <iostream>
using namespace std;
int main()
{

    int x, y, tong;
    float trungbinh;
    cout << "Nhap hai so nguyen : " << endl;
    cin >> x >> y;
    tong = x + y;
    trungbinh = tong / 2.0f;
    cout << "Tong cua " << x << " va " << y << " la " << tong << "." << endl;
    cout << "Trung binh cua " << x << " va " << y << " la " << trungbinh << "." << endl;
    return 0;
}