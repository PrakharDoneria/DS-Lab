#include <stdio.h>

#define MAX_SIZE 100

struct Queue
{
    int queue[MAX_SIZE];
    int front;
    int rear;
};

void initializeQueue(struct Queue* q){
    q -> front = -1;
    q -> rear = -1;
}

int isEmpty(struct Queue* q){
    return q -> front == -1;
}

int isFull(struct Queue* q){
    return q -> rear == MAX_SIZE - 1;
}

void enqueue(struct Queue *q, int data){
    if(isFull(q)){
        printf("Queue is full\n");
        return;
    }
    if(isEmpty(q)){
        q -> front = 0;
    }
    q -> rear++;
    q -> queue[q -> rear] = data;
    printf("%d enqueued to queue\n", data);
};

int dequeue(struct Queue *q){
    if(isEmpty(q)){
        printf("Queue is empty\n");
        return -1;
    }
    int data = q -> queue[q -> front];
    if(q -> front == q -> rear){
        q -> front = -1;
        q -> rear = -1;
    }else{
        q -> front++;
    }
    printf("%d dequeued from queue\n", data);
    return data;
}

void display(struct Queue *q){
    if(isEmpty(q)){
        printf("Queue is empty\n");
        return;
    }
    for (int i = q -> front; i < q -> rear; i++){
        printf("%d ", q -> queue[i]);
    }
    printf("\n");    
}

int main(){
    struct Queue q;
    initializeQueue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    printf("Queue elements: ");
    display(&q);
    dequeue(&q);
    printf("Queue elements after dequeue: ");
    display(&q);
    return 0;
}