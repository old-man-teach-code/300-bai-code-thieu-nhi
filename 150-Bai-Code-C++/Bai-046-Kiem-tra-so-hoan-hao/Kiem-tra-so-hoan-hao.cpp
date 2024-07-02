#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool check = false;

    int s = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            s += i;
    }
    if (s == n)
        check = true;
    else
        check = false;

    if (check)
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
    return 0;
}