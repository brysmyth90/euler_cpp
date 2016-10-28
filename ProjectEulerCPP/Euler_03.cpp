/*
Largest prime factor
Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/


#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <vector>

bool is_prime(__int64 i)
{
	//std::cout << "passed in i = " << i << "\n";
	double i_sqrt = std::sqrt(i);
	int int_sqrt = (int)i_sqrt;
	//std::cout << "int_sqrt is " << int_sqrt << "\n";
	for (int j = 2; j < (int_sqrt + 1); j++)
	{
		//std::cout << "going to see if " << i <<  " % " << j << " is 0 ...\n";
		if (i % j == 0)
		{
			//std::cout << "returning false for " << i << "\n";
			return false;
		}
	}
	//std::cout << "returning true for " << i << "\n";
	return true;
}

int euler_03()
{
	//int top = 13195;
	__int64 topper = 600851475143;
	for (__int64 i = std::sqrt(topper); i > 1; i--)
	{
		if (is_prime(i) && (topper % i == 0) )
		{
			std::cout << "prime factor " << i << "\n";
		}
	}
	return 0;
}

//4,294,967,295
//4,294,967,295
//600,851,475,143
//600851475143