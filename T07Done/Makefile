OPT = -Wall

T07:	main.o Book.o Library.o List.o Control.o View.o Non_Fiction_Book.o Fiction_Book.o
	g++ $(OPT) -o T07 main.o Book.o Library.o List.o Control.o View.o Non_Fiction_Book.o Fiction_Book.o

main.o:	main.cc Book.h
	g++ $(OPT) -c main.cc

Book.o:	Book.cc Book.h
	g++ $(OPT) -c Book.cc

Fiction_Book.o:	Fiction_Book.cc Fiction_Book.h
	g++ $(OPT) -c Fiction_Book.cc

Non_Fiction_Book.o: Non_Fiction_Book.cc Non_Fiction_Book.h
	g++ $(OPT) -c Non_Fiction_Book.cc

Library.o: Library.cc Library.h
	g++ $(OPT) -c Library.cc

Array.o: List.cc List.h
	g++ $(OPT) -c List.cc

View.o: View.cc View.h
	g++ $(OPT) -c View.cc

Control.o: Control.cc Control.h
	g++ $(OPT) -c Control.cc

clean:
	rm -f *.o T07
