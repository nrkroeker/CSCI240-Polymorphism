// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "Sort.h"

class BubbleSort : public Sort {

  public:

    // Constructor and deconstructor
    BubbleSort();
    ~BubbleSort();

    // Overriding virtual method
    virtual void sortArray(int* numArray, int arrayLength);

};
#endif
