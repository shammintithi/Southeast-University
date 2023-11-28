#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

char queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(char element) {
    if ((front == 0 && rear == MAX_SIZE - 1) || (rear == front - 1)) {
        printf("Queue is full.\n");
        return;
    }
    else if (front == -1 && rear == -1) {
        front = rear = 0;
    }
    else if (rear == MAX_SIZE - 1) {
        rear = 0;
    }
    else {
        rear++;
    }
    queue[rear] = element;
}

char dequeue() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty.\n");
        return '\0';
    }
    char element = queue[front];
    if (front == rear) {
        front = rear = -1;
    }
    else if (front == MAX_SIZE - 1) {
        front = 0;
    }
    else {
        front++;
    }
    return element;
}

void printQueue() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue: ");
    if (rear >= front) {
        for (int i = front; i <= rear; i++) {
            printf("%c ", queue[i]);
        }
    }
    else {
        for (int i = front; i < MAX_SIZE; i++) {
            printf("%c ", queue[i]);
        }
        for (int i = 0; i <= rear; i++) {
            printf("%c ", queue[i]);
        }
    }
    printf("\n");
}

int main() {
    enqueue('F'); // insert F
    printQueue();
    dequeue(); // delete D
    printQueue();
    enqueue('G'); // insert G
    enqueue('H'); // insert H
    printQueue();
    dequeue(); // delete E
    printQueue();
    return 0;
}