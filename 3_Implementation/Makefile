# Name of the project
PROJECT_NAME = MusicQuizGame

#Doxyfile folder
DOC = documentation

#All source code files
SRC = main.c\
src/main_operations.c

#All test source files
TEST_SRC = src/main_operations.c\
test/test_main_operations.c\
unity/unity.c

TEST_OUTPUT = Test_a.out

#All include folders with header files
INC = -Iinc\
-Iunity\

#Project Output Name
PROJECT_OUTPUT = main.out

#Document files
DOCUMENTATION_OUTPUT = documentation/html
Build:
	gcc test.c test_file.c unity/unity.c -Iunity
Run:
	./a.out