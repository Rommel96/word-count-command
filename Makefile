CC=gcc -I.
CFLAGS=-c
FLS=main.o conteo.o mess_help.o 
DEPS=include/conteo.h include/globales.h include/mess_help.h
all: wc

wc: $(FLS)
	$(CC) -o wc $(FLS)
main.o: src/main.c $(DEPS)
	$(CC) $(CFLAGS) src/main.c
conteo.o: src/conteo.c $(DEPS)
	$(CC) $(CFLAGS) src/conteo.c
mess_help.o: src/mess_help.c include/mess_help.h
	$(CC) $(CFLAGS) src/mess_help.c 

clean: 
	rm *o wc
