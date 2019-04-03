all:
	g++ -pthread Model.cpp NanoTimer.h LineInterface.cpp LineController.cpp callTimer2.cpp TextInterface.cpp TextController.cpp -o program
	./program
clean: 
	rm program
