#include <stdio.h>
int main()
{
    int n, i, count = 0;
    printf("enter a no:");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("total digit is = %d", count);
    return 0;
}