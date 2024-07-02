#include <iostream>
using namespace std;
int main()
{
    int val1;
    int val2;
    int val3;
    cout << "Ban hay nhap ba so nguyen theo thu tu tang dan:";
    cin >> val1 >> val2 >> val3; 
    cout << "Ban hay nhap: " << val1 << " ; " << val2 << " ; " << val3 << "\n";
    cout << "Ban hay nhap ba so nguyen theo thu tu giam dan:";
    cin >> val1 >> val2 >> val3; // Gia tri moi ghi de` len gia tri cu
    cout << "Ban hay nhap: " << val1 << " ; " << val2 << " ; " << val3 << "\n";

    return 0;
}