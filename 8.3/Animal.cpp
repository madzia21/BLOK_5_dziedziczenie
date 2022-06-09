#include "Animal.hpp"
#include <iostream>
void Animal::walks() const
{
	std::cout << "animal walks" << std::endl;
}

void Dog::barks() const
{
	std::cout << "dog barks" << std::endl;
	this->walks();
}

void Cat::miaus() const
{
	std::cout << "cat miaus " << std::endl;
	this->walks();
}
