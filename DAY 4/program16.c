#include <stdio.h>
#include <math.h>

int main()
{
    int start, end, num, temp, digits, rem;
    long sum;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers are:\n");

    for (num = start; num <= end; num++)
    {
        temp = num;
        digits = 0;
        sum = 0;

        while (temp != 0)
        {
            digits++;
            temp /= 10;
        }

        temp = num;

        while (temp != 0)
        {
            rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}