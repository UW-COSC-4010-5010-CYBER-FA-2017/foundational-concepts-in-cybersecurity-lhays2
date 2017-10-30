all: proj1Good proj1Bad\
	proj2Good proj2Bad\
	proj3Good proj3Bad\
	proj4Good proj4Bad\
	proj5Good proj5Bad\
	proj6Good proj6Bad\
	proj7Good proj7Bad\
	proj8Good proj8Bad\
	proj9Good proj9Bad\
	proj10Good proj10Bad\


proj1Good: ./1/src/proj1Good.cpp
	g++ -std=gnu++11 -o ./1/src/proj1Good ./1/src/proj1Good.cpp

proj1Bad: ./1/src/proj1Bad.cpp
	g++ -std=gnu++11 -o ./1/src/proj1Bad ./1/src/proj1Bad.cpp

proj2Good: ./2/src/proj2Good.cpp
	g++ -std=gnu++11 -o ./2/src/proj2Good ./2/src/proj2Good.cpp

proj2Bad: ./2/src/proj2Bad.cpp
	g++ -std=gnu++11 -pthread -o ./2/src/proj2Bad ./2/src/proj2Bad.cpp

proj3Good: ./3/src/proj3Good.cpp
	g++ -std=gnu++11 -o ./3/src/proj3Good ./3/src/proj3Good.cpp \
        ./3/src/gumball_machine.cpp ./3/src/gumball_machine.h

proj3Bad: ./3/src/proj3Bad.cpp
	g++ -std=gnu++11 -o ./3/src/proj3Bad ./3/src/proj3Bad.cpp 

proj4Good: ./4/src/proj4Good.cpp
	g++ -std=gnu++11 -o ./4/src/proj4Good ./4/src/proj4Good.cpp

proj4Bad: ./4/src/proj4Bad.cpp
	g++ -std=gnu++11 -o ./4/src/proj4Bad ./4/src/proj4Bad.cpp


proj5Good: ./5/src/proj5Good.cpp
	g++ -std=gnu++11 -o ./5/src/proj5Good ./5/src/proj5Good.cpp \
        ./5/src/gumball_machine.cpp ./5/src/gumball_machine.h

proj5Bad: ./5/src/proj5Bad.cpp
	g++ -std=gnu++11 -o ./5/src/proj5Bad ./5/src/proj5Bad.cpp 

proj6Good: ./6/src/proj6Good.cpp
	g++ -std=gnu++11 -o ./6/src/proj6Good ./6/src/proj6Good.cpp

proj6Bad: ./6/src/proj6Bad.cpp
	g++ -std=gnu++11 -o ./6/src/proj6Bad ./6/src/proj6Bad.cpp


proj7Good: ./7/src/proj7Good.cpp
	g++ -std=gnu++11 -o ./7/src/proj7Good ./7/src/proj7Good.cpp

proj7Bad: ./7/src/proj7Bad.cpp
	g++ -std=gnu++11 -o ./7/src/proj7Bad ./7/src/proj7Bad.cpp


proj8Good: ./8/src/proj8Good.cpp
	g++ -std=gnu++11 -o ./8/src/proj8Good ./8/src/proj8Good.cpp \
        ./8/src/gumball_machine.cpp ./8/src/gumball_machine.h

proj8Bad: ./8/src/proj8Bad.cpp
	g++ -std=gnu++11 -o ./8/src/proj8Bad ./8/src/proj8Bad.cpp 

proj9Good: ./9/src/proj9Good.cpp
	g++ -std=gnu++11 -o ./9/src/proj9Good ./9/src/proj9Good.cpp

proj9Bad: ./9/src/proj9Bad.cpp
	g++ -std=gnu++11 -o ./9/src/proj9Bad ./9/src/proj9Bad.cpp \
        ./9/src/Adder.cpp ./9/src/Adder.h ./9/src/Reader.cpp \
	./9/src/Reader.h ./9/src/Writer.cpp ./9/src/Writer.h


proj10Good: ./10/src/proj10Good.cpp
	g++ -std=gnu++11 -o ./10/src/proj10Good ./10/src/proj10Good.cpp

proj10Bad: ./10/src/proj10Bad.cpp
	g++ -std=gnu++11 -o ./10/src/proj10Bad ./10/src/proj10Bad.cpp \
        ./10/src/Adder.cpp ./10/src/Adder.h ./10/src/Reader.cpp \
	./10/src/Reader.h ./10/src/Writer.cpp ./10/src/Writer.h


clean:
	rm ./1/src/proj1Good ./1/src/proj1Bad \
	./2/src/proj2Good ./2/src/proj2Bad \
	./3/src/proj3Good ./3/src/proj3Bad \
	./4/src/proj4Good ./4/src/proj4Bad \
	./5/src/proj5Good ./5/src/proj5Bad \
	./6/src/proj6Good ./6/src/proj6Bad \
	./7/src/proj7Good ./7/src/proj7Bad \
	./8/src/proj8Good ./8/src/proj8Bad \
	./9/src/proj9Good ./9/src/proj9Bad \
	./10/src/proj10Good ./10/src/proj10Bad
