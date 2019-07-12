ABC.exe: fact.o big3.o main.o
	gcc -o ABC.exe fact.o big3.o main.o 
main.o:
	gcc -c main.c
fact.o:
	gcc -c fact.c
big3.o:
	gcc -c big3.c
