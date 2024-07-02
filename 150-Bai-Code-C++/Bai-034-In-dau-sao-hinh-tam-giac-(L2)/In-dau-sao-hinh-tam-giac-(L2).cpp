
#include <iostream>

using namespace std;

int main()
{

    for (int i = 1; i <= 7; i++)
    {
        for (int j = 7 - i; j >= 1; --j)
            cout << "*";
        cout << "\n";
    }

    return 0;
}