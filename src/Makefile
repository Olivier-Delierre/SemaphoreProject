BIN_DIR = ../bin
EXEC = $(BIN_DIR)/SemaphoreProject

SRC_DIR = .
SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJ_DIR = ../obj
OBJ = $(SRC:.cpp=.o)
OBJ := $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%,$(OBJ))

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -o $@ -c $< 

clean:
	@rm -rf $(OBJ_DIR)/*.o