#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Reversed array: \n");
    for(int i=n-1;i>=0;i--)
    printf("%d \t",arr[i]);
    return 0;
}