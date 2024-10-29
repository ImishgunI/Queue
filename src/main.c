#include <stdio.h>

#include "queue.h"

int main() {
    for(int i = 1; i <= 100; ++i) {
        push_back(i);
    }
    printf("Size: %d\n", size());
    output_queue();
    clean_queue();
    printf("\nSize after clean: %d", size());
}