BIN_DIR = ../../bin
EXEC = $(BIN_DIR)/Generateur

OBJ_DIR = ../../obj
SRC_DIR = .

GENERATEUR = $(wildcard $(SRC_DIR)/*.cc)

DEPENDENCIES_DIR = ..
DEPENDENCIES = $(DEPENDENCIES_DIR)/Point.cc $(DEPENDENCIES_DIR)/Voiture.cc $(DEPENDENCIES_DIR)/Carrefour.cc
DEPENDENCIES_OBJ = $(DEPENDENCIES:.cc=.o)
DEPENDENCIES_OBJ := $(patsubst $(DEPENDENCIES_DIR)/%,$(OBJ_DIR)/%,$(DEPENDENCIES_OBJ))

OBJ = $(GENERATEUR:.cc=.o)
OBJ := $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%,$(OBJ))

INC = -I..

tests: $(EXEC)

$(EXEC): $(DEPENDENCIES_OBJ) $(OBJ)
	$(CC) $^ -o $@

$(OBJ_DIR)/%.o: $(DEPENDENCIES_DIR)/%.cc
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cc
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)/*.o

mrproper: clean
	@rm -rf $(EXEC)