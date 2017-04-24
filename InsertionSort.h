// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include "Sort.h"

class InsertionSort : public Sort {

  public:

    InsertionSort();
    ~InsertionSort();

    virtual int* sortArray(int numArray[], int arrayLength);

};
#endif
