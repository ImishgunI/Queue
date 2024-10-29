#include "queue.h"

#include <stdio.h>
#include <stdlib.h>

queue *head = NULL, *tail = NULL;

void push_back(int value) {
    queue* temp = malloc(sizeof(queue));
    if (temp == NULL) {
        printf("memory wasn't been allocated in push\n");
        return;
    }
    temp->value = value;
    temp->next = NULL;
    if (tail == NULL) {
        head = tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

queue* pop_front() {
    queue* delete_node;
    if (head == NULL) {
        printf("queue are empty");
        return NULL;
    }
    delete_node = head;
    head = head->next;
    if (head == NULL) {
        tail = NULL;
    }
    return delete_node;
}

void output_queue() {
    queue* current = head;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
}

void clean_queue() {
    queue* delete_node;
    while (head != NULL) {
        delete_node = pop_front();
        free(delete_node);
    }
}

int size() {
    queue* current = head;
    if(current == NULL) {
        return 0;
    }
    int len = 0;
    while(current != NULL) {
        ++len;
        current = current->next;
    }
    return len;
}

int is_empty() {
    return (head == NULL) ? 1 : 0;
}

int peek_top() {
    return head->value;
}

int peek_back() {
    return tail->value;
}