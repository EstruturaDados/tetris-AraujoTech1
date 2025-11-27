#ifndef QUEUE_H
#define QUEUE_H


#define QUEUE_SIZE 5


typedef struct {
char name;
int id;
} Piece;


typedef struct {
Piece items[QUEUE_SIZE];
int front;
int count;
} CircularQueue;


void initQueue(CircularQueue *q, int *nextId);
int enqueue(CircularQueue *q, Piece p);
int dequeue(CircularQueue *q, Piece *out);
void invertQueue(CircularQueue *q);


#endif