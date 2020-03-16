output: bin/main.o bin/display.o
	gcc bin/main.o bin/display.o -o bin/xnos

bin/main.o: src/main.c
	gcc -c src/main.c -o bin/main.o

bin/display.o: src/display.c
	gcc -c src/display.c -o bin/display.o

clean:
	rm bin/*.o
