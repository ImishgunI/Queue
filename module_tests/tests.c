#include <stdio.h>

#include "../src/queue.h"

extern struct queue* head;
extern struct queue* tail;

void test_push();

int main() {
    printf("TEST1 PUSH\n");
    test_push();
    return 0;
}

void test_push() {
    queue* node = NULL;

    int value1 = 10, value2 = 20, value3 = 30;
    node = push_back(value1);
    node = push_back(value2);
    node = push_back(value3);

    if(tail != NULL) {
        printf("Value %d\n", node->value);
        printf("Head value: %d\n", head->value);
        printf("SUCCESS");
    } else {
        printf("FAIL");
    }
}