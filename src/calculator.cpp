#include "Headers/Declarations.h"

void calculator_additon()
{
	printf("this is additon!");
	printf("if you want to not fill out a number just press enter");

	int x;
	int y;

	std::cout << "type number 1" << std::endl;
	std::cin >> x;
	std::cout << "type number 2" << std::endl;
	std::cin >> y;

	int result;

	result = x + y;

	std::cout << "the sum of both of the numbers is : " << result << std::endl;
	std::cout << "press esc to terminate" << std::endl;
}

void calculator_subtarction()
{
	printf("this is subtraction!");
	printf("if you want to not fill out a number just press enter");

	int x;
	int y;

	std::cout << "type number 1" << std::endl;
	std::cin >> x;
	std::cout << "type number 2" << std::endl;
	std::cin >> y;

	int result;

	result = x - y;

	std::cout << "the sum of both of the numbers is : " << result << std::endl;
	std::cout << "press esc to terminate" << std::endl;
}

void calculator_division()
{
	printf("this is division!");
	printf("if you want to not fill out a number just press enter");

	int x;
	int y;

	std::cout << "type number 1" << std::endl;
	std::cin >> x;
	std::cout << "type number 2" << std::endl;
	std::cin >> y;

	int result;

	result = x / y;

	std::cout << "the sum of both of the numbers is : " << result << std::endl;
	std::cout << "press esc to terminate" << std::endl;
}

void calculator_multiplication()
{
	printf("this is multiplication!");
	printf("if you want to not fill out a number just press enter");

	int x;
	int y;

	std::cout << "type number 1" << std::endl;
	std::cin >> x;
	std::cout << "type number 2" << std::endl;
	std::cin >> y;

	int result;

	result = x * y;

	std::cout << "the sum of both of the numbers is : " << result << std::endl;
	std::cout << "press esc to terminate" << std::endl;
}