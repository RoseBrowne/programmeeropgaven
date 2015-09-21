# eenvoudige makefile
all: main.o
	g++ -Wall -g -o stack main.o
# main.o: main.cpp arrays/arrayStack.h
	# g++ -Wall -g -c main.cpp
# main.o: main.cpp pointers/pointerStack.h
	# g++ -Wall -g -c main.cpp
# main.o: main.cpp vectors/vectorStack.h
	# g++ -Wall -g -c main.cpp
main.o: main.cpp stacks/stackStack.h
	g++ -Wall -g -c main.cpp