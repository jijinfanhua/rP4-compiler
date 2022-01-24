LEX      = flex
YACC     = bison
CC       = g++
CFLAGS   = -std=gnu++2a
HEADERS  = $(wildcard ./*.h) $(wildcard ./*.hpp)
SOURCE   = rp4_compiler.cpp
TARGET   = rp4_compiler.exe
CMP_OBJ  = rp4_compiler.o
LEX_OBJ  = lex.yy.o
LEX_SRC  = lex.l
LEX_C    = lex.yy.c
YACC_OBJ = yacc.o
YACC_SRC = yacc.y
YACC_CPP = yacc.cpp

all: ${YACC_OBJ} ${LEX_OBJ}  ${CMP_OBJ}
	${CC} ${CFLAGS} ${LEX_OBJ} ${YACC_OBJ} ${CMP_OBJ} -o ${TARGET}

${YACC_OBJ}: ${YACC_SRC} ${HEADERS}
	${YACC} -d ${YACC_SRC} -o ${YACC_CPP}
	${CC} ${CFLAGS} -c ${YACC_CPP}

${LEX_OBJ}: ${LEX_SRC} ${HEADERS}
	${LEX} ${LEX_SRC}
	${CC} ${CFLAGS} -c ${LEX_C}

${CMP_OBJ}: ${SOURCE} ${HEADERS}
	${CC} ${CFLAGS} -c ${SOURCE}

clean:
	-rm *.o
	-rm ${TARGET}