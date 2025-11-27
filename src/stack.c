#include "stack.h"


void initStack(Stack *s){ s->top = -1; }


int pushStack(Stack *s, Piece p){
if(s->top >= STACK_CAP - 1) return 0;
s->items[++s->top] = p;
return 1;
}


int popStack(Stack *s, Piece *out){
if(s->top < 0) return 0;
if(out) *out = s->items[s->top];
s->top--;
return 1;
}


int swapTopWithFront(CircularQueue *q, Stack *s){
if(q->count == 0 || s->top < 0) return 0;
int idx = q->front;
Piece temp = q->items[idx];
q->items[idx] = s->items[s->top];
s->items[s->top] = temp;
return 1;
}