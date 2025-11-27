#include "snapshot.h"


void saveSnapshot(Snapshot *snap, CircularQueue q, Stack s, int nextId) {
snap->q = q;
snap->s = s;
snap->nextId = nextId;
snap->valid = 1;
}


void restoreSnapshot(Snapshot *snap, CircularQueue *q, Stack *s, int *nextId) {
if(!snap->valid) return;
*q = snap->q;
*s = snap->s;
*nextId = snap->nextId;
snap->valid = 0;