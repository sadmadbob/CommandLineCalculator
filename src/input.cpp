#include "Headers/Declarations.h"
#include "Headers/func_declare.h"

void Input()
{
	int x;

	std::cout << "1 for additon" << std::endl;
	std::cout << "2 for multiplication" << std::endl;
	std::cout << "3 for division" << std::endl;
	std::cout << "4 for subtraction" << std::endl;
	std::cout << "5 to exit" << std::endl;

	std::cin >> x;

	if (x = 1)
	{
		calculator_additon();
	}

	if (x = 2)
	{
		calculator_multiplication();
	}

	if (x = 3)
	{
		calculator_division();
	}

	if (x = 4)
	{
		calculator_subtarction();
	}

	if (x = 5)
	{
		exit;
	}
}