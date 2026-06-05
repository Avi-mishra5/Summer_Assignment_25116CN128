#include <stdio.h>
int main()
{
    int n, i, j, prime, largest;
    printf("enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    prime = 0;
                    break;
                }
            }
            if (prime )
            {
                largest = i;
            }
        }
    }
    printf("largest prime factor = %d\n", largest);
    return 0;
}