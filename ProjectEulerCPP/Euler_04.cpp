/*
Largest palindrome product
Problem 4
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int euler_04()
{
	int answer = 0;
	for (int x = 10; x < 1000; x++)
	{
		for (int y = 10; y < 1000; y++)
		{
			//std::cout << x << ":" << y << "\n";
			int product = (x * y);
			std::string s = std::to_string(product);
			std::string s_fwd = s;
			std::reverse(s.begin(), s.end());
			if (s_fwd == s)
			{
				//std::cout << s_fwd << " : " << s << "\n";
				if (product > answer)
				{
					answer = product;
				}
			}
		}
	}
	return answer;
}