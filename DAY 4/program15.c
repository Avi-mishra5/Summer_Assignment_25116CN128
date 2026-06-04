#include<stdio.h>
#include<math.h>
int main()
{
    int n,num,num1,r,c=0,sum=0;
    printf("Enter The Number");
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        n=n/10;
        c=c+1;
    }
    
    num1=num;
    while(num>0)
    {
        r=num%10;
        sum=sum+pow(r,c);
        num=num/10;

    }

    if(sum==num1)
    {
        printf("The Number is a Armstrong Number");
    }
    else
    {
        printf("The Number is not a Armstrong Number");
    }
    return 0;
}