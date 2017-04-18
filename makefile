driver: Sort.o InsertionSort.o BubbleSort.o Driver.o
	g++ Sort.o InsertionSort.o BubbleSort.o Driver.o -o driver

Driver.o: Driver.cpp
	g++ -c Driver.cpp

Sort.o: Sort.cpp
	g++ -c Sort.cpp

InsertionSort.o: InsertionSort.cpp
	g++ -c InsertionSort.cpp

BubbleSort.o: BubbleSort.cpp
	g++ -c BubbleSort.cpp

clean: 
	rm -f *.o
	rm -f driver

run: 
	./driver
