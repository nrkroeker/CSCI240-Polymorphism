// Honor Pledge: I pledge that I have neither given nor received any help on this assignment
#include "Sort.h"
#include "BubbleSort.h"
#include <iostream>


BubbleSort::BubbleSort() {

}

BubbleSort::~BubbleSort() {

}

int* BubbleSort::sortArray(int numArray[], int arrayLength) {
  std::cout << "Insertion Sort: " << std::flush;

  // Loop through all integers in the array
  for (int i = 0; i < 5; i++) {

    for (int a = 0; a < 5 - i - 1; a++) {
      if (numArray[a] > numArray[a + 1]) {

        int swap = numArray[a];
        numArray[a] = numArray[a + 1];
        numArray[a + 1] = swap;
      }
    }
  }
  return numArray;
}
