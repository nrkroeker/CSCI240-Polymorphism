// Honor Pledge: I pledge that I have neither given nor received any help on this assignment
#include "Sort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>


void loadFile() {

}

int main() {
bool mainLoop = true;
bool sortLoop = true;
std::string menuInput;
std::string sortInput;

  while(mainLoop) {
    std::cout << "1. Load Data (From File) \n2. Exit Program \nPlease select an option > " << std::flush;
    std::cin >> menuInput;

    if(menuInput == "1") {
      loadFile();
      std::cout << "\nNumber array loaded from file\n" << std::endl;

      sortLoop = true;

      while(sortLoop) {
        std::cout << "1. Insertion Sort \n2. Bubble Sort \n3. Exit Program \nPlease select an option > " << std::flush;
        std::cin >> sortInput;

        if (sortInput == "1") {

          std::cout << "\nInsertion Sort\n" << std::endl;
          InsertionSort * insert = new InsertionSort();

          int array[] = {2,6,9,3,1};
          insert->sortArray(array, 5);

          sortLoop = false;

        } else if (sortInput == "2") {
          std::cout << "\nBubble Sort\n" << std::endl;
          BubbleSort * bubble = new BubbleSort();

          int array[] = {2,6,9,3,1};
          bubble->sortArray(array, 5);

          // End sorting loop and return to the loading option
          sortLoop = false;
        } else if (sortInput == "3") {
          // End both loops and exit program
          sortLoop = false;

          mainLoop = false;
        } else {
          std::cout << "\nPlease select a valid input.\n" << std::endl;
        }
      }
    } else if (menuInput == "2") {
      // Exit main loop
      mainLoop = false;
    } else {
      std::cout << "\nPlease select a valid input.\n" << std::endl;
    }
  }

  std::cout << "\nNow exiting...\n" << std::endl;

  return 0;
}
