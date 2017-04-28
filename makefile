driver: Sort.o InsertionSort.o BubbleSort.o Driver.o
	g++ Sort.o InsertionSort.o BubbleSort.o Driver.o -o driver

Driver.o: Driver.cpp
	g++ -g -c Driver.cpp

Sort.o: Sort.cpp
	g++ -g -c Sort.cpp

InsertionSort.o: InsertionSort.cpp
	g++ -g -c InsertionSort.cpp

BubbleSort.o: BubbleSort.cpp
	g++ -g -c BubbleSort.cpp

clean: 
	rm -f *.o
	rm -f driver

run: 
	./driver
