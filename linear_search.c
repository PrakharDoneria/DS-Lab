#include <stdio.h>

int linearSearch(int* arr, int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

// void main(){
//     int key;
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Enter the element to search: ");
//     scanf("%d", &key);

//     int i = linearSearch(arr, n, key);
//     if(i != -1){
//         printf("Element found at index: %d\n", i);
//     }else{
//         printf("Element not found in the array.\n");
//     }
// }