#include <iostream>
using namespace std;
int main()
{
    int age;
    age = 26;
    double can_nang = 72.6;
    char nhom_mau = 'O';
    float tai_khoan_1 = -1000;
    float tai_khoan_2 = 50;
    bool dung_hay_sai = true;
    cout << " Nam nay toi " << age << " tuoi.\n";
    cout << " Toi nang " << can_nang << " kg.\n";
    cout << " Nhom mau cua toi la " << nhom_mau << "\n";
    cout << " Toi co 2 tai khoan ngan hang. ";
    cout << " Mot tai khoan co " << tai_khoan_1 << "VND, ";
    cout << " tai khoan kia co " << tai_khoan_2 << "VND \n";
    cout << " Co ai yeu toi khong?" << endl;
    cout << " Chi can " << dung_hay_sai << " nguoi yeu thoi!";
    return 0;
}