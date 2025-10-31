#include <stdio.h>

int main() {
    int arr[6] = {10, 20, 30, 40, 50};  
    int n = 5;  
    int element;

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    arr[n] = element;
    n++;

    printf("Array elements after insertion are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}