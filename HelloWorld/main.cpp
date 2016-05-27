#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	std::cout << "Hi, what's your name? ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name << "." << std::endl;

	system("pause");
	return 0;
}
