// Honor Pledge: I pledge that I have neither given nor received any help on this assignment
#include "Sort.h"
#include "InsertionSort.h"
#include <iostream>


InsertionSort::InsertionSort() {

}

InsertionSort::~InsertionSort() {

}

void InsertionSort::sortArray(int* numArray, int arrayLength) {
  int a, b;
  for (int i = 0; i < arrayLength; i++) {
    b = i;
    while (b > 0 && numArray[b] < numArray[b - 1]) {
      a = numArray[b];
      numArray[b] = numArray[b - 1];
      numArray[b - 1] = a;

      b--;
    }
  }
}
