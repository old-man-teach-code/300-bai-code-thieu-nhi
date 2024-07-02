#include <iostream>

using namespace std;
int main()
{
    int h, m, s;
    long time;
    cout << "Nhap gio, phut, giay [1]: ";
    cin >> h >> m >> s;
    time = 3600 * h + 60 * m + s;
    cout << "Nhap gio, phut, giay [2]: ";
    cin >> h >> m >> s;
    time -= 3600 * h + 60 * m + s;
    if (time < 0)
        time = -time;
    cout << "Hieu thoi gian: " << time / 3600 << " gio, " << (time % 3600) / 60 << " phut, " << (time % 3600) % 60 << " giay\n";
    return 0;
}