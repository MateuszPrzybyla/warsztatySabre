#include <iostream>
#include "add.h"
using namespace std;

void areEquals( double expected, double got )
{
	if( expected != got )
		cout << "Expected: " << expected << " but got: " << got << endl;
	else
		cout << "Test passed!\n";
}

void test1()
{
	areEquals( 4, add( 2, 2 ) );
}