#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>

/*
    We need to use 2 pointers, 1 to first element, 2 to last element, 
*/

typedef struct queue {
    int value;
    struct queue* next;
} queue;

extern struct queue* head, *tail;

void push_back(queue** node, int value);
queue* pop_front(queue** node);

#endif