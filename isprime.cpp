/**
 * author: popecan1000@gmail.com
 * auth_repo: http://github.com/otumian-empire
 * date: 7th July, 2021
 * title: Is Prime
 * description: a program the returns 1 is a given number is prime, else 0
 * algo:
 * 		given n,
 *		divid n by values between 1 and n
 * 		if any of them divides n, return 0 else 1 
 */

#include <iostream>

using namespace std;

#define true 1
#define false 0

// is_prime function - accpets an integer n, 
// and returns true (1) if n is prime else false (0)
int is_prime(int n);

int main()
{
	// some values to test is
	int nums[10] = {1, -23, -0, 45, 42, 12, -2, 73, 9, 14};

	for (int i = 0; i < 10; i++)
	{		
		cout << nums[i] << " is" << (is_prime(nums[i]) ? "is" : "is not") 
			<< " prime." << endl;
	}

	return 0;
}

// is_prime implementation
int is_prime(int n)
{
	// check if n is negative
	if (n < 0)
	{
		n *= -1;
	}

	// 0 and 1 are not prime
	if (n == 0 || n == 1)
	{
		return false;
	}

	// 2 is prime..
	if (n == 2)
	{
		return true;
	}

	// all even numbers except 2, are not prime
	if (n % 2 == 0)
	{
		return false;
	}

	// looping through only odd numbers
	for (int x = 3; x < n / 2; x += 2)
	{
		if (n % x == 0)
		{
			return false;
		}
	}

	// original algo
	/*
		for (int x = 2; x < n; x++) {
			if (n % x == 0) {
				return false;
			}
		}
		
		return true;
	
	*/

	return true;
}

/*
ways to improve the algo
if x = 2, doesn't divide into n, then no even number would.
so use odd numbere through out
also, all even numbers after 2 are not prime, so check if n is even, and return 0
*/

