// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include "Sort.h"

class InsertionSort : public Sort {

  public:

    // Constructor and deconstructor
    InsertionSort();
    ~InsertionSort();

    // Overriding virtual method
    virtual void sortArray(int* numArray, int arrayLength);

};
#endif
