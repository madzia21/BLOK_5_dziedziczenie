#pragma once

class Animal
{
public:
	void walks() const;
};
class Dog : public Animal
{
public:
	void barks() const;
};
class Cat : public Animal
{
public:
	void miaus() const;
};

