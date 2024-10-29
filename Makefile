CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11
QUEUE_FILES = ./src/queue.c
TEST_FILE = ./module_tests/tests.c

test: queue.o tests.o
	$(CC) $(CFLAGS) $^ -o $@

queue.o: $(QUEUE_FILES)
	$(CC) $(CFLAGS) -c $^ -o $@

tests.o: $(TEST_FILE)
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm *.o

clang-format:
	clang-format -i ./src/*.c
	clang-format -i ./src/*.h
	clang-format -i ./module_tests/*.c