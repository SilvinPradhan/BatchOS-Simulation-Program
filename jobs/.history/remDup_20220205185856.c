#include <stdio.h>

int removeDuplicates(int arr[], int n)
{
    if (n==0 || n==1){
        return n;
    }
    int j = 0;
 
    for (int i= 0; i< n-1; i++) {
        if (arr[i] != arr[i+1]){
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n-1];
 
    return j;
}
 
// Driver code
int main()
{
    int arr[] = {1, 2, 3,3,3,5,6,6,7,7,7,9,9,9,11};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    n = removeDuplicates(arr, n);
    
    int i;
    for (i=0; i<n; i++)
        printf(" %d \t", arr[i]);
 
    return 0;
}