OPT = -Wall

T06:	main.o Book.o Library.o List.o Control.o View.o
	g++ $(OPT) -o t06 main.o Book.o Library.o List.o Control.o View.o

main.o:	main.cc Book.h
	g++ $(OPT) -c main.cc

Book.o:	Book.cc Book.h
	g++ $(OPT) -c Book.cc

Library.o: Library.cc Library.h
	g++ $(OPT) -c Library.cc

Array.o: List.cc List.h
	g++ $(OPT) -c List.cc

View.o: View.cc View.h
	g++ $(OPT) -c View.cc

Control.o: Control.cc Control.h
	g++ $(OPT) -c Control.cc

clean:
	rm -f *.o t06
