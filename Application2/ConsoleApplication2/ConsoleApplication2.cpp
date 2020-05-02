#include<iostream>
#include "add.h"

int doubleNumber(int a)
{
	return 2 * a;
}
int main()
{
	int a;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Enter number!" << std::endl;
	std::cin >> a;
	std::cout << doubleNumber(a) << std::endl;
	std::cout << "The sum of 3 and 4 is " << add(3, 4) << std::endl;
	return 0;
}

