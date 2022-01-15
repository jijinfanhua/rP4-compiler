CC       = g++
CFLAGS   = -std=c++2a -fconcepts -O2
HEADERS  = $(wildcard ./*.h)
SOURCE   = ./p4r.cpp
TARGET   = ./p4r.exe

all: ${HEADERS} ${SOURCE} 
	${CC} ${CFLAGS} ${SOURCE} -o ${TARGET}

clean:
	-rm ${TARGET}