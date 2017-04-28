// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "Sort.h"

class BubbleSort : public Sort {

  public:

    BubbleSort();
    ~BubbleSort();

    virtual void sortArray(int* numArray, int arrayLength);

};
#endif
