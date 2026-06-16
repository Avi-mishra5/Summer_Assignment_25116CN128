#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the terms: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int maxFreq=0,maxEl;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==arr[i])
            count++;
        }
        if(count>maxFreq)
        {
            maxFreq=count;
            maxEl=arr[i];
        }
    }
    printf("Maximum Frequency element is %d",maxEl);
    return 0;
}