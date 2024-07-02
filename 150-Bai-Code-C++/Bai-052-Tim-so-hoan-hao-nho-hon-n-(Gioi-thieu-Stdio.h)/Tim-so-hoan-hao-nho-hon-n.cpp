#include <stdio.h>
int main()
{
    unsigned n, i, j, sum;
    printf("Nhap n: ");
    scanf("%u", &n);
    printf("Cac so hoan hao nho hon %u: ", n);
    for (i = 1; i < n; ++i)
    {
        for (sum = 0, j = 1; sum <= i && j <= i / 2; ++j)
            if (i % j == 0)
                sum += j;
        if (sum == i)
            printf("%u ", i);
    }
    return 0;
}