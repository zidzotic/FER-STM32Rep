SRC=$(wildcard src/*.c)
OBJ=$(patsubst src/%.c, obj/%.o, $(SRC))

TEST_SRC=$(wildcard test/*.c)
TEST_OBJ=$(patsubst test/%.c, obj/%.o, $(TEST_SRC))

INC=inc/
CFLAGS=-I $(INC)

EXE=exe/app.elf
TESTS=$(patsubst test/%.c, exe/%.elf, $(TEST_SRC))

.SECONDARY:

#build project
all: $(EXE)
#build test
test_io: exe/test_file_io.elf	
test_compute: exe/test_compute.elf	


$(EXE): $(OBJ)
	gcc $^ -o $@

exe/test_file_io.elf: obj/test_file_io.o $(OBJ)
	gcc $^ -o $@

exe/test_compute.elf: obj/test_compute.o $(OBJ)
	gcc $^ -o $@

obj/%.o: src/%.c
	gcc -c $< $(CFLAGS) -o $@

obj/%.o: test/%.c
	gcc -c $< $(CFLAGS) -o $@

#run all tests
run_tests: $(TESTS)
	@for test in $(TESTS);do
		./$$test;
	done

clean:
	rm -f obj/*.o exe/*.elf





