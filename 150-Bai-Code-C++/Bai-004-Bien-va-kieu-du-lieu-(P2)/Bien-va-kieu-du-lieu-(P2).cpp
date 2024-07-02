#include <iostream>
using namespace std;
int main()
{
    int val1;
    double val2 = 13.564;
    val1 = val2;
    cout << "Gia tri val1 = " << val1 << endl;

    char val3;
    double val4 = 56;
    val3 = val4;
    cout << "Gia tri val3 = " << val3 << endl;

    char val5;
    int val6 = 97;
    val5 = val6;
    cout << "Gia tri val5 = " << val5 << endl;

    int val7;
    char val8 = 'a';
    val7 = val8;
    cout << "Gia tri val7 = " << val7 << endl;

    int val9;
    bool val10 = true;
    val9 = val10;
    cout << "Gia tri val9 = " << val9 << endl;
    return 0;
}