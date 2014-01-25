#include "test.h"
#include <iostream>

int main()
{
	testAdd();
	testMultiply();
	testPower();

	std::cout << power( add( multiply( 2, 2 ), 4 ), 3 ) << std::endl;
	
	system("pause");
	return 0;
}
