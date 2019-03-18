BIN_DIR = bin
EXEC = $(BIN_DIR)/SemaphoreProjTest

DEPENDENCIES_OBJ_DIR = ../obj
SRC_DIR = ../src
TEST_DIR = .

TEST = $(wildcard $(TEST_DIR)/*.cpp)

DEPENDENCIES = $(SRC_DIR)/Point.cpp
DEPENDENCIES_OBJ = $(DEPENDENCIES:.cpp=.o)
DEPENDENCIES_OBJ := $(patsubst $(SRC_DIR)/%,$(DEPENDENCIES_OBJ_DIR)/%,$(DEPENDENCIES_OBJ))

OBJ_DIR = obj
OBJ = $(TEST:.cpp=.o)
OBJ := $(patsubst $(TEST_DIR)/%,$(OBJ_DIR)/%,$(OBJ))

INC = -I../src

tests: $(EXEC)

$(EXEC): $(DEPENDENCIES_OBJ) $(OBJ)
	$(CC) $^ -lgtest -lpthread -o $@

$(DEPENDENCIES_OBJ_DIR)/Point.o: $(SRC_DIR)/Point.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(TEST_DIR)/%.cpp
	$(CC) $(CFLAGS) $(INC) -c $< -lgtest -lpthread -o $@

clean:
	@rm -rf $(TESTS_DIR)/*.o