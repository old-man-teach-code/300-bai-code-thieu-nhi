#include <iostream>

using namespace std;

/* khai bao ham */
int max(int num1, int num2);

int main()
{

    /* dinh nghia bien local */
    int a, b;
    cout << "Nhap vao a va b :";
    cin >> a >> b;
    int ret;

    /* goi mot ham de lay gia tri lon nhat */
    ret = max(a, b);

    cout << "Max value is: " << ret << endl;

    return 0;
}

/* ham tra ve gia tri lon nhat giua hai so */
int max(int num1, int num2)
{

    /* dinh nghia bien local */
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}