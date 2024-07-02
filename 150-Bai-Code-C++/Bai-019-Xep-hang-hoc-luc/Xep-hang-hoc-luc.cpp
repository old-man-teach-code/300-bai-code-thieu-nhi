#include <iostream>

using namespace std;

int main()
{
    float a;
    float b;
    float c;
    float dtb;
    cout << "Nhap diem kiem tra giua ky tuong ung 3 mon Toan, Ly, Hoa:";
    cin >> a >> b >> c;
    dtb = (a + b + c) / 3;
    cout << "Diem trung binh là: " << dtb << endl;

    if (dtb >= 9.0)
        cout << "Hang A";
    else if ((dtb >= 7.0) && (dtb < 9.0))
        cout << "Hang B";
    else if ((dtb >= 5.0) && (dtb < 7.0))
        cout << "Hang C";
    else if (dtb < 5.0)
        cout << "Hang F";
    else
        cout << "Diem trung binh khong hop le";

    cout << "\n";
    return 0;
}