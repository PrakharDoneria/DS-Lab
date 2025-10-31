#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL; 

void create(int arr[], int n) {
    struct Node *temp, *last;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = arr[0];
    head->next = NULL;
    last = head;

    for (int i = 1; i < n; i++) {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void traverse() {
    struct Node *p = head;
    printf("Array elements (linked list): ");
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void push(int value) {
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = value;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
        return;
    }

    struct Node *p = head;
    while (p->next != NULL)
        p = p->next;

    p->next = temp;
}

void pop() {
    if (head == NULL) {
        printf("List is empty, nothing to pop!\n");
        return;
    }

    struct Node *p = head, *q = NULL;

    if (head->next == NULL) {
        printf("Popped element: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    while (p->next != NULL) {
        q = p;
        p = p->next;
    }

    printf("Popped element: %d\n", p->data);
    free(p);
    q->next = NULL;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    create(arr, n);
    traverse();

    printf("Pushing 60...\n");
    push(60);
    traverse();

    printf("Popping last element...\n");
    pop();
    traverse();

    return 0;
}