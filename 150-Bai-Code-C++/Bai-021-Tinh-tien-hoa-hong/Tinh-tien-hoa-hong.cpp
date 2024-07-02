#include <iostream>

using namespace std;
int main()
{
    long int doanhso;
    float hoahong;
    cout << "Tong doanh so ban hang : " << endl;
    cin >> doanhso;
    if (doanhso <= 100)
    {
        hoahong = doanhso * 5 / 100;
        cout << "Voi tong doanh so la " << doanhso << ", ";
        cout << "thi hoa hong nhan duoc la " << hoahong;
    }
    else if (doanhso <= 300)
    {
        hoahong = doanhso * 10 / 100;
        cout << "Voi tong doanh so la " << doanhso << ", ";
        cout << "thi hoa hong nhan duoc la " << hoahong;
    }
    else if (doanhso > 300)
    {
        hoahong = doanhso * 20 / 100;
        cout << "Voi tong doanh so la " << doanhso << ", ";
        cout << "thi hoa hong nhan duoc la " << hoahong;
    }
    return 0;
}