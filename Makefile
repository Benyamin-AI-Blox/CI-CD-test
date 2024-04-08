XX=g++
XXFLAGS=

all: *.o
	$(XX) *.o -o exe

main.o: main.cpp
	$(XX) -C main.c -o main.o

clean:
	rm -rf *.o exe