ifeq ($(OS), Windows_NT)
	SRC := src\
	LIB := lib\
	BIN := math.exe
	RM := del
else
	SRC := src/
	LIB := lib/
	BIN := math
	RM := rm
endif

COMPILER := c++
FLAGS := -Wpedantic

compile:
	$(COMPILER) -I$(LIB) $(FLAGS) $(SRC)*.cpp -o $(BIN)

clean:
	-$(RM) $(BIN)
