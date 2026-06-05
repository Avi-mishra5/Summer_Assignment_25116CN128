#include <stdio.h>
int main()
{
    int n, d, sum = 0, fac, i, temp;
    printf("enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        d = n % 10;
        fac = 1;
        for (i = 1; i <= d; i++)
        {
            fac = fac * i;
        }
        sum = sum + fac;
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("number is strong");
    }
    else
    {
        printf("number is not strong");
    }
    return 0;
}