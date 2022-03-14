###
## Makefile
## INFO0947: Projet 1
##
###

## Variables

# Tools & flags
CC=gcc
CFLAGS=--std=c99 --pedantic -Wall -W -Wmissing-prototypes -Wextra
LD=gcc
LDFLAGS=

# Files
EXEC=filtrer
MODULES=propriete.c filtrer.c
OBJECTS=main.o filtrer.o propriete.o

## Rules

all: $(EXEC)

filtrer: $(OBJECTS)
	$(LD) -o code/$(EXEC) $(OBJECTS) $(LDFLAGS)

main.o: code/main.c
	$(CC) -c code/main.c -o main.o $(CFLAGS)

propriete.o: code/propriete.c
	$(CC) -c code/propriete.c -o propriete.o $(CFLAGS)

filtrer.o: code/filtrer.c
	$(CC) -c code/filtrer.c -o filtrer.o $(CFLAGS)

clean:
	rm -f *.o $(EXEC) *~
	rm -f code/$(EXEC)

archive:
	tar -czvf pnm.tar.gz Makefile pnm.c pnm.h main.c
