CC := gcc 
CFLAGS := -Wall -g
BIN_DIR := build
EXEC := $(BIN_DIR)
SCR := main.c

$(EXEC): $(BIN_DIR) $(SRC)
	$(CC) $(CFLAGS) -o $(EXEC) $(SCR)

$(BIN_DIR):
	@mkdir -p $(BIN_DIR)

clean:
	rm -rf $(BIN_DIR)
	
all: $(EXEC)