#include "linear_search.c"
#include "binary_search.c"

#include <stdio.h>

void main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int linearResult = linearSearch(arr, n, key);
    if (linearResult != -1) {
        printf("Linear Search: Element found at index: %d\n", linearResult);
    } else {
        printf("Linear Search: Element not found in the array.\n");
    }

    int binaryResult = binarySearch(arr, 0, n - 1, key);
    if (binaryResult != -1) {
        printf("Binary Search: Element found at index: %d\n", binaryResult);
    } else {
        printf("Binary Search: Element not found in the array.\n");
    }
}