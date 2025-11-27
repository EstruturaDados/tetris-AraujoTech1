#ifndef SNAPSHOT_H
#define SNAPSHOT_H


#include "queue.h"
#include "stack.h"


typedef struct {
CircularQueue q;
Stack s;
int nextId;
int valid;
} Snapshot;


void saveSnapshot(Snapshot *snap, CircularQueue q, Stack s, int nextId);
void restoreSnapshot(Snapshot *snap, CircularQueue *q, Stack *s, int *nextId);


#endif