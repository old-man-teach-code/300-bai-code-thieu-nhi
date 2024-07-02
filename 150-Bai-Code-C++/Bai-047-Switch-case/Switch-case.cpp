#include <iostream>
using namespace std;

int main()
{

    char diem = 'A';

    switch (diem)
    {
    case 'A':
        cout << "Xuat xac" << endl;
        break;
    case 'B':
        cout << "Gioi" << endl;
        break;
    case 'C':
        cout << "Kha" << endl;
        break;
    case 'D':
        cout << "Trung Binh" << endl;
        break;
    case 'F':
        cout << "Yeu" << endl;
        break;
    default:
        cout << "Diem khong hop le" << endl;
    }
    cout << "Diem cua ban la: " << diem << endl;

    return 0;
}