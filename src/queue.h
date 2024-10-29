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

struct queue* head = NULL, *tail = NULL;



#endif