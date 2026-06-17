#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the number of terms in array 1 and 2 respectively: ");
    scanf("%d %d",&n,&m);
    int a1[n],a2[m],a3[n+m];
    printf("Enter the elements of array 1: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a1[i]);
    printf("Enter the elements of array 2: ");
    for(int i=0;i<m;i++)
    scanf("%d",&a2[i]);
    for(int i=0;i<n;i++)
    a3[i]=a1[i];
    for(int i=0;i<m;i++)
    a3[n+i]=a2[i];
    printf("Merged array: \n");
    for(int i=0;i<n+m;i++)
    printf("%d\t",a3[i]);
    return 0;
}