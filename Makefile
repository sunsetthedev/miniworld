CC= gcc
CFLAGS= -Wall -std=c99 -o

CDIR= $(wildcard src/*.c)
HDIR= $(wildcard include/*.h)
BDIR= build/miniworld

all: build 

build: $(CDIR) $(HDIR)
	$(CC) $(CDIR) $(CFLAGS) $(BDIR)

clean: 
	rm $(BDIR)

.PHONY: all clean
