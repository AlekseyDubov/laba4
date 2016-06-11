./bin/func: ./obj/main.o ./obj/func.o ./bin
	gcc ./obj/main.o ./obj/func.o -o ./bin/func

./obj/main.o: ./src/main.c ./obj
	gcc -c ./src/main.c -o ./obj/main.o -Wall

./obj/func.o: ./src/func.c ./obj
	gcc -c ./src/func.c -o ./obj/func.o -Wall

./bin:  
	mkdir bin

./obj: 
	mkdir obj

.PHONY: clean
clean:
	rm -f -r bin/ obj/

