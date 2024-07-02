#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int N;
    while (cin >> N)
    {
        int S = 0;
        int SoChuSo = 0;
        int p = N;
        int q = N;
        while (N > 0)
        {
            N = N / 10;
            SoChuSo += 1;
        }
        for (int l = 1; l <= SoChuSo; l++)
        {
            int m = p % 10;
            p = p / 10;
            S += pow(m, SoChuSo);
        }
        if (S == q)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}