#ifndef QUEUE_H
#define QUEUE_H

/*
    We need to use 2 pointers, 1 to first element, 2 to last element, 
*/

typedef struct List {
    int value;
    struct list* next;
} List;

typedef struct queue {
    struct List* frnt, *rear;
} queue;

#endif