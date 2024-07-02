#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    float xA, yA, xB, yB;
    cout << "A(xA, yA)? ";
    cin >> xA >> yA;
    cout << "B(xB, yB)? ";
    cin >> xB >> yB;
    cout << "|AB| = " << sqrt((xB - xA) * (xB - xA) + (yB - yA) * (yB - yA));
    return 0;
}