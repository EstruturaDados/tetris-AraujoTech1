#ifndef STACK_H
#define STACK_H


#define STACK_CAP 3
#include "queue.h"


typedef struct {
Piece items[STACK_CAP];
int top;
} Stack;


void initStack(Stack *s);
int pushStack(Stack *s, Piece p);
int popStack(Stack *s, Piece *out);
int swapTopWithFront(CircularQueue *q, Stack *s);


#endif