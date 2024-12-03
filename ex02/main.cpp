#include "Array.hpp"
#include <iostream>


#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define RESET "\033[0m"

int main() {
  try {
    std::cout << GREEN << "__________Test the Deep Copy __________\n\n"
              << RESET;
    std::cout << GREEN << ":: Creation of the main array.\n" << RESET;

    Array<int> *array = new Array<int>(4);
    (*array)[0] = 1;
    (*array)[1] = 2;
    (*array)[2] = 3;

    std::cout << "array[0] = " << (*array)[0] << std::endl;
    std::cout << "array[1] = " << (*array)[1] << std::endl;
    std::cout << "array[2] = " << (*array)[2] << std::endl;
    std::cout << GREEN
              << "\n:: Creation of the array using copy constructor.\n";
    Array<int> arr(*array); // Creates a deep copy

    std::cout << GREEN
              << ":: Creation of the arrayCopy with the = operator. \n\n";
    Array<int> arrCopy;
    arrCopy = arr; // Uses assignment operator to create a deep copy

    std::cout << YELLOW << ":: Delete the main Array. \n\n";
    delete array;

    // Test the deep copies
    std::cout << YELLOW << ":: Test the operator [] creation\n" << RESET;
    std::cout << "arr[0] = " << arr[0] << std::endl;
    std::cout << "arr[1] = " << arr[1] << std::endl;
    std::cout << "arr[2] = " << arr[2] << std::endl;

    std::cout << YELLOW << ":: Test the operator [] creation\n" << RESET;
    std::cout << "arrCopy[0] = " << arrCopy[0] << std::endl;
    std::cout << "arrCopy[1] = " << arrCopy[1] << std::endl;
    std::cout << "arrCopy[2] = " << arrCopy[2] << std::endl;

    // Test out of range and handle exception
    try {
      std::cout << YELLOW << ":: Test the operator [] out of range\n";
      std::cout << RED << arr[4] << RESET << std::endl;
    } catch (const std::out_of_range &e) {
      std::cout << RED << e.what() << RESET << std::endl;
    }

    try {
      std::cout << RED << arrCopy[4] << RESET << std::endl;
    } catch (const std::out_of_range &e) {
      std::cout << RED << e.what() << RESET << std::endl;
    }
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  return 0;
}
