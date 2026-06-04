#include<stdio.h>
int main()
{
    int n, flag=0;
    printf("Enter the number to be checked: ");
    scanf("%d",&n);
    if(n<=1)
    printf("%d is not a prime number",n);
    else
    {
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        flag=1;
    }
    if(flag==0)
    printf("%d is a prime number",n);
    else
    printf("%d is not a prime number",n);
    }
    return 0;
}