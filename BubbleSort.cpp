// Honor Pledge: I pledge that I have neither given nor received any help on this assignment
#include "Sort.h"
#include "BubbleSort.h"
#include <iostream>

// Constructor and deconstructor
BubbleSort::BubbleSort() {

}

BubbleSort::~BubbleSort() {

}

// Overriden sorting method
void BubbleSort::sortArray(int* numArray, int arrayLength) {
  // Bubble sort algorithm loops
  for (int i = 0; i < 50; i++) {

    for (int a = 0; a < 50 - i - 1; a++) {
      if (numArray[a] > numArray[a + 1]) {

        int temp = numArray[a];
        numArray[a] = numArray[a + 1];
        numArray[a + 1] = temp;
      }
    }
  }
}
