#include "queue.h"

#include <stdio.h>
#include <stdlib.h>

void push_back(queue** node, int value) {
    queue* temp = malloc(sizeof(queue));
    if(temp == NULL) {
        printf("memory wasn't been allocated in push\n");
        return;
    }
    temp->value = value;
    temp->next = NULL;
    *node = temp;
    if(tail == NULL) {
        head = tail = *node;
    } else {
        tail->next = *node;
        tail = *node;
    }
}