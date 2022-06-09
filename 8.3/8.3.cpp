#include <iostream>
#include "Animal.hpp"

int main()
{
    Animal animal1;
    animal1.walks();
    std::cout << std::endl;
    Dog dog1;
    dog1.barks();
    std::cout << std::endl;
    dog1.walks();
    std::cout << std::endl;
    Cat cat1;
    cat1.miaus();
    std::cout << std::endl;
    cat1.walks();
}