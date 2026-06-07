#include <stdio.h>

int rev = 0;

int reverse(int n)
{
    if(n == 0)
        return rev;

    rev = rev * 10 + n % 10;
    reverse(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reverse = %d", reverse(n));

    return 0;
}