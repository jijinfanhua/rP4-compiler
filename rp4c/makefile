LEX      = flex
YACC     = bison
CC       = g++
CFLAGS   = -std=c++2a -fconcepts -O2
HEADERS  = $(wildcard ./*.h)
SOURCE   = ./rp4c.cpp
TARGET   = ./rp4c.exe
LEX_OBJ  = ./lex.yy.o
LEX_SRC  = ./lex.l
YACC_OBJ = ./yacc.tab.o
YACC_SRC = ./yacc.y

all: ${HEADERS} ${SOURCE} ${LEX_OBJ} 
	${CC} ${CFLAGS} ${SOURCE} -o ${TARGET}

${LEX_OBJ}: ${LEX_SRC} ${HEADERS}

clean:
	-rm *.o
	-rm ${TARGET}