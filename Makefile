all: compile link

compile:
	g++ -c main.cpp

link: 
	g++ main.o -o open