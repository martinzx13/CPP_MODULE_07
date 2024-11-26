#include "Template.hpp"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define RESET "\033[0m"

int main()
{
    int a = 2;
    int b = 3;

    std::cout << GREEN << "_________ VALUES ORIGINAL _________" << std::endl;
    std::cout << "a = " << a << "\nb = " << b << std::endl;

    std::cout << "_________ TEST 1 _________" << RESET << std::endl;
    std::cout << YELLOW << "min(a, b) = " << ::min(a, b) << RESET << std::endl;
    std::cout << MAGENTA << "max(a, b) = " << ::max(a, b) << RESET << std::endl;

    std::cout << GREEN << "\n_________ VALUES SWAP _________" << RESET << std::endl;
    ::swap(a, b);
    std::cout << YELLOW << "a = " << a << "\nb = " << b << RESET << std::endl;

    std::cout << GREEN << "_________ TEST 2 _________" << RESET << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << YELLOW << "c = " << c << "\nd = " << d << RESET << std::endl;
    std::cout << RED << "\nmin(c, d) = " << ::min(c, d) << RESET << std::endl;
    std::cout << MAGENTA << "max(c, d) = " << ::max(c, d) << RESET << std::endl;
    return 0;
}