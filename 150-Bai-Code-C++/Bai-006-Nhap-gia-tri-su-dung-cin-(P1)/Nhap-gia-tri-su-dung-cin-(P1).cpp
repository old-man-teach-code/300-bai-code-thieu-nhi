#include <iostream>
#include <string>
using namespace std;
int main()
{
    int age;
    string name;
    cout << "Ten cua ban la: ";
    cin >> name;
    cout << "Tuoi cua ban " << name << " la: ";
    cin >> age;
    cout << "Ban " << name << " " << age << " tuoi da co nguoi yeu chua?"
         << "\n";
    cout << "Chac la chua co nguoi yeu roi!";

    return 0;
}