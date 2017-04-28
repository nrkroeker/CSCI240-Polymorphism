// Honor Pledge: I pledge that I have neither given nor received any help on this assignment
#ifndef SORT_H
#define SORT_H

class Sort {

  public:

    // Constructor and deconstructor
    Sort();
    ~Sort();

    // Purely virtual function
    virtual void sortArray(int* numArray, int arrayLength) = 0;

};
#endif
