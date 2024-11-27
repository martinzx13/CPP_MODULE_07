#include "Array.hpp"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define RESET "\033[0m"

int main(){
    try{
        Array<int> array (4);
        std::cout << array[4] << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}