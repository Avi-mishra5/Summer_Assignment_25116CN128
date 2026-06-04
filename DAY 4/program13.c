#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series: %d\t %d\t",a,b);
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
    }
    return 0;
}