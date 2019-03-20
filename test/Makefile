BIN_DIR = bin
EXEC = $(BIN_DIR)/SemaphoreProjTest

DEPENDENCIES_OBJ_DIR = ../obj
SRC_DIR = ../src
TEST_DIR = .

TEST = $(wildcard $(TEST_DIR)/*.cc)

DEPENDENCIES = $(SRC_DIR)/Point.cc $(SRC_DIR)/Voiture.cc $(SRC_DIR)/Carrefour.cc
DEPENDENCIES_OBJ = $(DEPENDENCIES:.cc=.o)
DEPENDENCIES_OBJ := $(patsubst $(SRC_DIR)/%,$(DEPENDENCIES_OBJ_DIR)/%,$(DEPENDENCIES_OBJ))

OBJ_DIR = obj
OBJ = $(TEST:.cc=.o)
OBJ := $(patsubst $(TEST_DIR)/%,$(OBJ_DIR)/%,$(OBJ))

INC = -I../src

tests: $(EXEC)

$(EXEC): $(DEPENDENCIES_OBJ) $(OBJ)
	$(CC) $^ -lgtest -lpthread -o $@

$(DEPENDENCIES_OBJ_DIR)/%.o: $(SRC_DIR)/%.cc
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(TEST_DIR)/%.cc
	$(CC) $(CFLAGS) $(INC) -c $< -lgtest -lgtest_main -lpthread -o $@

clean:
	@rm -rf $(OBJ_DIR)/*.o

mrproper: clean
	@rm -rf $(EXEC)