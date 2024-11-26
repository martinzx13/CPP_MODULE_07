#include "Iterator.hpp"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define RESET "\033[0m"

template <typename T>
void print (const T &a) {
    std::cout << "Value " << a << std::endl;
};

template <typename T>

void add (T &a) {
    a++;
};

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char arr2[5] = {'a', 'b', 'c', 'd', 'e'};

    std::cout << GREEN << "_________ TEST 1 _________" << RESET << std::endl;
    std::cout << GREEN << "Iterating over an array of integers" << RESET << std::endl;
    ::iter(arr, 5, print<int>);

    std::cout << YELLOW << "_________ TEST 2 _________" << RESET << std::endl;
    std::cout << GREEN << "_________ Adding +1 ________" << RESET << std::endl;
    ::iter(arr, 5, add<int>);
    ::iter(arr, 5, print<int>);

    std::cout << YELLOW << "_________ TEST 3 _________" << RESET << std::endl;
    std::cout << GREEN << "Iterating over an array of characters" << RESET << std::endl;
    ::iter(arr2, 5, print<char>);
    std::cout << GREEN << "_________ Adding +1 ________" << RESET << std::endl;
    ::iter(arr2, 5, add<char>);
    ::iter(arr2, 5, print<char>);
    return 0;
}