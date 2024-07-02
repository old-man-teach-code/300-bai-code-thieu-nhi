#include <iostream>
using namespace std;
int main()
{
    int val1;
    int val2;
    cout << "Nhap vao gia tri val1 = ";
    cin >> val1;
    cout << "Nhap vao gia tri val2 = ";
    cin >> val2;
    cout << "val1 + val2 = " << val1 + val2 << endl;
    cout << "val1 - val2 = " << val1 - val2 << endl;
    cout << "val1 * val2 = " << val1 * val2 << endl;
    cout << "val1 / val2 = " << val1 / val2 << endl;
    cout << "val1 % val2 = " << val1 % val2 << endl;
    cout << "val1++ = " << val1++ << endl;
    cout << "++val1 = " << ++val1 << endl;
    cout << "val1-- = " << val1-- << endl;
    cout << "--val1 = " << --val1 << endl;
    return 0;
}