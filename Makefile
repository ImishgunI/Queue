CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11
QUEUE_FILES = ./src/queue.c
TEST_FILE = ./module_tests/tests.c
MAIN_FILE = ./src/main.c
BUILD_PATH_FOR_TEST = ./module_tests/
BUILD_PATH_FOR_MAIN = ./src/
test: queue.o tests.o
	$(CC) $(CFLAGS) $^ -o $(BUILD_PATH_FOR_TEST)$@

queue.o: $(QUEUE_FILES)
	$(CC) $(CFLAGS) -c $(QUEUE_FILES) -o $@

tests.o: $(TEST_FILE)
	$(CC) $(CFLAGS) -c $(TEST_FILE) -o $@

queue: queue.o main.o
	$(CC) $(CFLAGS) $^ -o $(BUILD_PATH_FOR_MAIN)$@

main.o: $(MAIN_FILE)
	$(CC) $(CFLAGS) -c $(MAIN_FILE) -o $@
clean:
	rm *.o

clang-format:
	clang-format -i ./src/*.c
	clang-format -i ./src/*.h
	clang-format -i ./module_tests/*.c

