#include<stdio.h>
int main()
{
    int x,n,a=1;
    printf("Enter any number: ");
    scanf("%d",&x);
    printf("Enter the power to which the number should be raised: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        a*=x;
    printf("the value of %d raised to the power %d is %d",x,n,a);
    return 0;
}
