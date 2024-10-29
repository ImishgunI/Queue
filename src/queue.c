#include "queue.h"

#include <stdio.h>
#include <stdlib.h>

queue* head = NULL, *tail = NULL;

void push_back(int value) {
    queue* temp = malloc(sizeof(queue));
    if(temp == NULL) {
        printf("memory wasn't been allocated in push\n");
        return;
    }
    temp->value = value;
    temp->next = NULL;
    if(tail == NULL) {
        head = tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}