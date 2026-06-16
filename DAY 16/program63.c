#include <stdio.h>
int main() {
    int n, sum, found = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter required sum: ");
    scanf("%d", &sum);
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
                break;
            }
        }
        if(found)
            break;
    }
    if(!found)
        printf("No pair found.");
    return 0;
}