#include "queue.h"
#include <stdlib.h>


Piece gerarPeca(int *nextId) {
Piece p;
char tipos[4] = {'I','O','T','L'};
p.name = tipos[rand() % 4];
p.id = (*nextId)++;
return p;
}


void initQueue(CircularQueue *q, int *nextId) {
q->front = 0;
q->count = 0;
for(int i=0;i<QUEUE_SIZE;i++){
q->items[i] = gerarPeca(nextId);
q->count++;
}
}


int enqueue(CircularQueue *q, Piece p) {
if (q->count == QUEUE_SIZE) return 0;
int pos = (q->front + q->count) % QUEUE_SIZE;
q->items[pos] = p;
q->count++;
return 1;
}


int dequeue(CircularQueue *q, Piece *out) {
if (q->count == 0) return 0;
if(out) *out = q->items[q->front];
q->front = (q->front + 1) % QUEUE_SIZE;
q->count--;
return 1;
}


void invertQueue(CircularQueue *q) {
if (q->count <= 1) return;
Piece temp[QUEUE_SIZE];
for (int i = 0; i < q->count; i++)
temp[i] = q->items[(q->front + i) % QUEUE_SIZE];
for (int i = 0; i < q->count; i++)
q->items[i] = temp[q->count - 1 - i];
q->front = 0;
}