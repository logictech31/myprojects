# CC = C Compiler
# BIN = Name of generated file
# OPTNS = Options (like -g -o and so on)
CC := gcc
BIN := quiz
OPTNS := -g -o $(BIN)
SRC_C := Start_Page.c easyq.c results_page.c mediumq.c hardq.c
all:
	$(CC) $(OPTNS) $(SRC_C)

clean:
	rm -f *.o $(BIN)