#include <stdio.h>
int main()
{
    int n, d, sum = 0;
    printf("enter a number:");
    scanf("%d", &n);
    while (n != 0)
    {
        d = n % 10;
        sum = sum + d;
        n = n / 10;
    }
    printf("sum of digit = %d", sum);
    return 0;
}