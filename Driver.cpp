// Honor Pledge: I pledge that I have neither given nor received any help on this assignment
#include "Sort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"
#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>

int main() {
bool mainLoop = true;
bool sortLoop = true;
std::string menuInput;
std::string sortInput;

  while(mainLoop) {
    std::cout << "1. Load Data (From File) \n2. Exit Program \nPlease select an option >" << std::flush;
    std::cin >> menuInput;

    if(menuInput == "1") {
      //loadFile();
      std::cout << "\nNumber array loaded from file\n" << std::endl;
      sortLoop = true;
      while(sortLoop) {
        std::cout << "1. Insertion Sort \n2. Bubble Sort \n3. Exit Program \nPlease select an option >" << std::flush;
        std::cin >> sortInput;

        if (sortInput == "1") {
          std::cout << "\nInsertion Sort\n" << std::endl;
          sortLoop = false;
        } else if (sortInput == "2") {
          std::cout << "\nBubble Sort\n" << std::endl;
          sortLoop = false;
        } else if (sortInput == "3") {
          sortLoop = false;
          mainLoop = false;
        } else {
          std::cout << "\nPlease select a valid input.\n" << std::endl;
        }
      }
    } else if (menuInput == "2") {
      mainLoop = false;
    } else {
      std::cout << "\nPlease select a valid input.\n" << std::endl;
    }
  }

  std::cout << "\nNow exiting...\n" << std::endl;

  return 0;
}
