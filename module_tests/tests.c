#include <stdio.h>

#include "../src/queue.h"

void test_push();

int main() {
    printf("TEST1 PUSH");
    test_push();
    return 0;
}

void test_push() {
    queue* node = NULL;

    int value1 = 10, value2 = 20, value3 = 30;
    push_back(&node, value1);
    push_back(&node, value2);
    push_back(&node, value3);

    if(tail != NULL) {
        printf("Value %d\n", node->next->value);
        printf("SUCCESS");
    } else {
        printf("FAIL");
    }
}