CC = gcc                          # Assigns CC to the GNU Compiler Collection
CFLAGS = -Wall -Wextra -Werror    # Compiler flags:
                                  # -Wall: Enables all compiler warnings
                                  # -Wextra: Enables additional warnings
                                  # -Werror: Treats warnings as errors
TARGET = finance_tracker          # Name of the executable to be generated
SRC = main.c user.c transaction.c # Source files to be compiled

# Default target: Builds the executable
all: $(TARGET)

# Rule for building the target
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Clean target: Removes the compiled executable
clean:
	rm -f $(TARGET)               # Removes the .exe or binary file
