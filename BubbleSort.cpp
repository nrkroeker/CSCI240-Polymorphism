// Honor Pledge: I pledge that I have neither given nor received any help on this assignment
#include "Sort.h"
#include "BubbleSort.h"
#include <iostream>


BubbleSort::BubbleSort() {

}

BubbleSort::~BubbleSort() {

}

int* BubbleSort::sortArray(int numArray[], int arrayLength) {
  for (int i = 0; i < 5; i++) {

    for (int a = 0; a < 5 - i - 1; a++) {
      if (numArray[a] > numArray[a + 1]) {

        int a = numArray[a];
        numArray[a] = numArray[a + 1];
        numArray[a + 1] = a;
      }
    }
  }
  return numArray;
}
