#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    int element, pos = -1;

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    printf("Enter the element to be deleted: ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Element not found!\n");
    } else {
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 

        printf("Array elements after deletion are:\n");
        for (int i = 0; i < n; i++) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}