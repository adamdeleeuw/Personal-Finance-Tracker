CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = finance_tracker
SRC = src/main.c src/user.c src/transactions.c

# Default target: Builds the executable
all: $(TARGET)

# Rule for building the target
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Clean target: Removes the compiled executable
clean:
	rm -f $(TARGET)
