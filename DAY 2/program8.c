#include <stdio.h>
int main()
{
    int n, d, temp, x = 0;
    printf("enter a number:");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        d = n % 10;
        x = x * 10 + d;
        n = n / 10;
    }
    if (temp == x)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}