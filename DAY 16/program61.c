#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=1;i<n;i++)
    scanf("%d",&arr[i]);
    int a=n*(n+1)/2;
    for(int i=1;i<n;i++)
    sum+=arr[i];
    int x=a-sum;
    printf("The missing term is %d ",x);
    return 0;
}