// Honor Pledge: I pledge that I have neither given nor received any help on this assignment
#include "Sort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>

// Function to print out every integer in the array
void printArray(int* array) {
  for (int i = 0; i < 50; i++) {
    std::cout << array[i] << std::flush;
    if (i != 49) {
      std::cout << ", " << std::flush;
    } else {
      std::cout << "\n" << std::endl;
    }
  }
}

// Function to load in the integers in the array
void loadFile(int* numArray) {
  std::stringstream ss;
  std::string numString;

  std::ifstream inputFileCheck("data.txt");
  std::ifstream inputFile("data.txt");
  int lineNum = 0;

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
  int numArray[51];
  bool mainLoop = true;
  bool sortLoop = true;
  std::string menuInput;
  std::string sortInput;

  // Loop for main menu
    while(mainLoop) {

      std::cout << "1. Load Data (From File) \n2. Exit Program \nPlease select an option > " << std::flush;
      std::cin >> menuInput;

      // Check input
      if(menuInput == "1") {
        sortLoop = true;

        // Second loop for second menu
        while(sortLoop) {
          loadFile(numArray);

          std::cout << "\nNumber array loaded from file\n" << std::endl;

          std::cout << "Unsorted Array: " << std::flush;
          printArray(numArray);
          std::cout << "1. Insertion Sort \n2. Bubble Sort \n3. Exit Program \nPlease select an option > " << std::flush;
          std::cin >> sortInput;

          // Check input
          if (sortInput == "1") {

            std::cout << "\nInsertion Sort: " << std::flush;
            InsertionSort * insert = new InsertionSort();

            // Sort array, print, and delete
            insert->sortArray(numArray, 50);
            printArray(numArray);
            delete insert;

            sortLoop = false;

          } else if (sortInput == "2") {
            std::cout << "\nBubble Sort: " << std::flush;
            BubbleSort * bubble = new BubbleSort();

            // Sort array, print, and delete
            bubble->sortArray(numArray, 50);
            printArray(numArray);
            delete bubble;

            sortLoop = false;

          } else if (sortInput == "3") {
            sortLoop = false;
            mainLoop = false;
          } else {
            // Input validation
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
