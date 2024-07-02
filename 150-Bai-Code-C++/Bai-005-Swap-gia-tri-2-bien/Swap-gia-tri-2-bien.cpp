#include <iostream>
using namespace std;
int main()
{
    int x1 = 10;
    int x2 = 33;
    cout << "Gia tri bien x1 = " << x1 << endl;
    cout << "Gia tri bien x2 = " << x2 << endl;
    int temp = x2;
    x2 = x1;
    x1 = temp;
    cout << "Sau khi swap: " << endl;
    cout << "Gia tri bien x1 = " << x1 << endl;
    cout << "Gia tri bien x2 = " << x2 << endl;
    return 0;
}