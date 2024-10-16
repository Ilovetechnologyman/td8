# Makefile
CC = gcc
CFLAGS = -g -W -Wall -std=c99
LDFLAGS =
OBJ = app.o pile.o vehicule.o
spin_app: $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o spin_app
common.o: common.c common.h
app.o : app.c
pile.o : pile.c pile.h
vehicule.o : vehicule.c vehicule.h
clean :
	rm -f $(OBJ) spin_app
