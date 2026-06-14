#include<stdio.h>
int main()
{
    int n,key,pos=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            pos=1;
            printf("Element found at position %d",i+1);
            break;
        }
    }
    if(pos==0)
    printf("Element not found \n");
    return 0;
}