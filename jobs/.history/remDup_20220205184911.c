#include <stdio.h>

int removeDuplicate(int arr[],  int n) {

}

int main() {
    int arr[] = {1,2,3,4,4,5,6,6,7,9,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    n = removeDuplicates(arr, n);
    int i;
    for (i = 0; i<n; i++){
        printf(" %d \t", arr[i]);
    }
    return 0;
}