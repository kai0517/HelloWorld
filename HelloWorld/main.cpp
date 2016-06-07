#include <iostream>
#include <string>
#include <vector>

void TestCurlyBraceDelimitedInitializerAndAuto()
{
	int i{ 10 };
	// error C2397: conversion from 'double' to 'int' requires a narrowing conversion
	// int i2{ 3.14 }; 
	std::cout << "The value of 'i' is " << i << "\n";

	double d{ 3.14159 };
	std::cout << "The value of 'd' is " << d << "\n";

	std::vector< int > v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::cout << "The value of integer vector 'v' is [";
	for (auto it = v.begin(); it != v.end(); ++it)
	{
		std::cout << (it == v.begin() ? "" : ",") << *it;
	}
	std::cout << "]\n";
}

int main(int argc, char* argv[])
{
	std::cout << "Hi, what's your name? ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name << "." << std::endl;

	TestCurlyBraceDelimitedInitializerAndAuto();

	system("pause");
	return 0;
}
