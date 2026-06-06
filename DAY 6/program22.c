#include <stdio.h>

int main()
{
    int b,d=0,base=1,rem;
    printf("Enter a binary number: ");
    scanf("%d",&b);
    while (b>0)
    {
        rem=b%10;
        d=d+rem*base;
        base = base * 2;
        b/=10;
    }
    printf("Decimal = %d", d);
    return 0;
}