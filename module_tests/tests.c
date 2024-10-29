#include <stdio.h>
#include <stdlib.h>

#include "../src/queue.h"

extern struct queue* head;
extern struct queue* tail;

void test_push();
void test_pop();
void test_output();
void test_size();
void test_peeks();

int main() {
    printf("TEST PUSH\n");
    test_push();
    printf("\n\nTEST POP\n");
    test_pop();
    printf("\n\nTEST OUTPUT\n");
    test_output();
    printf("\n\nTEST SIZE\n");
    test_size();
    printf("\n\nTEST PEEKS\n");
    test_peeks();
    return 0;
}

void test_push() {
    int value1 = 10, value2 = 20, value3 = 30;
    push_back(value1);
    push_back(value2);
    push_back(value3);

    if (tail != NULL) {
        printf("Head value: %d\n", head->value);
        printf("SUCCESS");
    } else {
        printf("FAIL");
    }
}

void test_pop() {
    clean_queue();

    int value1 = 10, value2 = 20, value3 = 30;
    push_back(value1);
    push_back(value2);
    push_back(value3);

    printf("Before delete head value: %d\n", head->value);
    queue* delete = pop_front();
    if (delete != NULL) {
        printf("After delete head value: %d\n", head->value);
        printf("SUCCESS");
        free(delete);
    } else {
        printf("FAIL");
        free(delete);
    }
}

void test_output() {
    clean_queue();

    int value1 = 10, value2 = 20, value3 = 30;
    push_back(value1);
    push_back(value2);
    push_back(value3);

    printf("Before pop: ");
    output_queue();

    queue* delete_node = pop_front();
    free(delete_node);

    printf("\nAfter pop: ");
    output_queue();
}

void test_size() {
    clean_queue();

    int value1 = 10, value2 = 20, value3 = 30;
    push_back(value1);
    push_back(value2);
    push_back(value3);

    int len = size();
    if(len != 0) {
        printf("%d\n", len);
        printf("SUCCESS");
    } else {
        printf("0\n");
        printf("FAIL");
    }
}

void test_peeks() {
    int top = peek_top();
    int back = peek_back();
    printf("Top: %d Back: %d", top, back);
}

