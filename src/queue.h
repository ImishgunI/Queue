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

extern struct queue* head;
extern struct queue* tail;

void push_back(int value);
queue* pop_front();
void output_queue();
void clean_queue();
int size();
int is_empty();
int peek_top();
int peek_back();
#endif