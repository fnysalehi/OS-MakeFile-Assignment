CC=gcc
CFLAGS=-I.
DEPS = addmake.h
OBJ = addmake.o addfunc.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

addmake: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)
clean:
	rm -f  *o $(objects) addmake