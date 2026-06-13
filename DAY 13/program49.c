#include<stdio.h>
int main()
{
    int n,a[n];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    printf("The array is: \n");
    for(int i=1;i<=n;i++)
    printf("%d \t",a[i]);
    return 0;
}