SRC= src/calc_add.c\
src/calc_sub.c\
src/calc_mul.c\
src/calc_div.c\
src/calc_power.c\
src/calc_square.c\

INC_H=inc
TEST_H= unity
TEST_C= unity/unity.c
TEST_UH= test/test.c

ifdef OS
   EXE = exe
else
   ifeq ($(shell uname), Linux)
	  EXE = out -lm
   endif
endif 

ifdef OS
   EXE_T = final_test.exe
else
   ifeq ($(shell uname), Linux)
	  EXE_T = ./final_test.out
   endif
endif 

create: $(SRC) Calculator_main.c
	gcc -I $(INC_H)  $(SRC)  Calculator_main.c -o final.$(EXEC)

run:final.$(EXE)
	final.$(EXE)

valgrind:
	valgrind ./final.$(EXE)

create_test: $(SRC) $(TEST_UH) 
	gcc -I $(INC_H) -I $(TEST_H) $(SRC) $(TEST_C) $(TEST_UH)  -o final_test.$(EXE)

run_test:final_test.$(EXE)
		 $(EXE_T)
coverageCheck:
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 -I $(INC_H) -I $(TEST_H) $(SRC) $(TEST_C) $(TEST_UH) -o TEST_OUTPUT.out
	./TEST_OUTPUT.out

clean:
	del *.$(EXE)