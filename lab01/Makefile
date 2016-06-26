hello:	hello.o main.o
	gcc hello.o main.o -o hello

main.o:	main.c hello.h
	gcc -c main.c

hello.o:	hello.c hello.h
	gcc -c hello.c
