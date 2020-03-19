output: bin/main.o bin/display.o bin/ai.o
	gcc bin/main.o bin/display.o bin/ai.o -o bin/xnos

bin/main.o: src/main.c
	gcc -c src/main.c -o bin/main.o

bin/display.o: src/display.c
	gcc -c src/display.c -o bin/display.o

bin/ai.o: src/ai.c
	gcc -c src/ai.c -o bin/ai.o

clean:
	rm bin/*.o
