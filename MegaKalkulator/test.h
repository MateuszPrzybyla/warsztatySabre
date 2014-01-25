#include <iostream>
#include "add.h"
#include "multiply.h"
#include "power.h"
using namespace std;

void areEquals( double expected, double got )
{
	if( expected != got )
		cout << "Expected: " << expected << " but got: " << got << endl;
	else
		cout << "Test passed!\n";
}

void testAdd()
{
	areEquals( 4, add( 2, 2 ) );
}

void testMultiply()
{
	areEquals( -121, multiply( 11, -11 ) );
}

void testPower()
{
	areEquals( 32, power( 2, 5 ) );
}