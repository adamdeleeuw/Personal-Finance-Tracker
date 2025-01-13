# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror 

# Source files
SRC = src/main.c src/user.c src/transactions.c
OBJ = $(SRC:.c=.o)
EXEC = finance_tracker

# Build rules
all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJ) $(EXEC)
