#include<iostream>
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
    return 0;
}

