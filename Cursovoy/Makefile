all: log_proc

log_proc: main.o temp_functions.o
	gcc -Wall -o log_proc main.o temp_functions.o

main.o: main.c
	gcc -c -o main.o main.c

temp_functions.o: temp_functions.c
	gcc -c -o temp_functions.o temp_functions.c

clean:
	del *.o
	del log_proc.exe