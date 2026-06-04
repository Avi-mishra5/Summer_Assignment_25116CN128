#include <stdio.h>
int main()
{
    int a, b, i, j, prime;
    printf("enter the first number : \n ");
    scanf("%d", &a);

    printf("enter the last number : \n");
    scanf("%d", &b);

    printf("prime number from a to b is :");
    for (i = a; i <= b; i++)
    {
        prime = 1;
        if (i < 2)
        {
            prime = 0;
        }
        for (j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d ", i);
        }
    }
    return 0;
}