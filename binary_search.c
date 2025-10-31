#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key){
    while (left <= right) {
        int mid = left + (right - left)/2;

        if (arr[mid] == key) {
            return mid;
        }

        if (arr[mid] < key){
            left = mid + 1;
        }else
        {
            right = mid - 1;
        }
    }
    return -1;
}

void main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 7;
    int result = binarySearch(arr, 0, size - 1, key);

    if(result != -1){
        printf("Element found at index: %d\n", result);
    }else{
        printf("Element not found in the array\n");
    }
}