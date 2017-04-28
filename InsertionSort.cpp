// Honor Pledge: I pledge that I have neither given nor received any help on this assignment
#include "Sort.h"
#include "InsertionSort.h"
#include <iostream>


InsertionSort::InsertionSort() {

}

InsertionSort::~InsertionSort() {

}

int* InsertionSort::sortArray(int array[], int arrayLength) {
  int a, b;
  for (int i = 0; i < arrayLength; i++) {
    b = i;
    while (b > 0 && array[b] < array[b - 1]) {
      a = array[b];
      array[b] = array[b - 1];
      array[b - 1] = a;

      b--;
    }
  }
  return array;
}
