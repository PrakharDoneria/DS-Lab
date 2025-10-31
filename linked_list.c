#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main(){
    Node *first = (Node *)malloc(sizeof(Node));
    first->data = 1;
    Node *secound = (Node *)malloc(sizeof(Node));
    secound->data = 2;
    Node *third = (Node *)malloc(sizeof(Node));
    third->data = 3;
    first->next = secound;
    secound->next = third;
    third->next = NULL;

    printf("Linked List: ");
    Node *temp = first;
    while (temp){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}