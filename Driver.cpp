// Honor Pledge: I pledge that I have neither given nor received any help on this assignment
#include "Sort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>

int numArray[50];

void printArray(int sortedArray[]) {
  for (int i = 0; i < 50; i++) {
    std::cout << sortedArray[i] << std::flush;
    if (i != 49) {
      std::cout << ", " << std::flush;
    } else {
      std::cout << "\n" << std::endl;
    }
  }
}

void loadFile() {
  std::stringstream ss;
  std::string numString;

  std::ifstream inputFileCheck("data.txt");
  std::ifstream inputFile("data.txt");
  int lineNum;

  if (inputFile.is_open()) {
    while (std::getline(inputFileCheck, numString, ',')) {
      std::getline(inputFile,numString,',');

      std::stringstream converter(numString);
      int value;
      converter >> value;

      numArray[lineNum] = value;
      lineNum++;
    }

    inputFile.close();

  } else {
    std::cout << "Unable to open file" << std::endl;
  }
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

      std::cout << "Unsorted Array: " << std::flush;
      printArray(numArray);

      sortLoop = true;

      while(sortLoop) {
        std::cout << "1. Insertion Sort \n2. Bubble Sort \n3. Exit Program \nPlease select an option > " << std::flush;
        std::cin >> sortInput;

        if (sortInput == "1") {

          std::cout << "\nInsertion Sort: " << std::flush;
          InsertionSort * insert = new InsertionSort();

          int* insertSortedArray = insert->sortArray(numArray, 50);
          printArray(insertSortedArray);

          sortLoop = false;

        } else if (sortInput == "2") {
          std::cout << "\nBubble Sort: " << std::flush;
          BubbleSort * bubble = new BubbleSort();

          int* bubbleSortedArray = bubble->sortArray(numArray, 50);
          printArray(bubbleSortedArray);
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
