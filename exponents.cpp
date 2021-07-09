/**
 * author: popecan1000@gmail.com
 * auth_repo: http://github.com/otumian-empire
 * date: 9th July, 2021
 * title: Exponents
 * description: A program that takes 2 inputs n and k and returns the n power k.
 * input: 2, 3
 * output: 8
 */

#include <iostream>
using namespace std;

// expo declaration
float expo(int n, int k);

// main
int main()
{
	int n = 2;
	int k = 3;
	// modify with cin to get n, k

	cout << n << " raised to the power " << k << " is " << expo(n, k) << endl;

	return 0;
}

/**
a function that takes two arguments, n and k, 
where n is the number and k is the power to be raised to.
*/
float expo(int n, int k)
{

	int pow = 1;
	int temp = k;

	if (temp < 0)
	{
		temp *= -1;
	}

	for (int i = 0; i < temp; i++)
	{
		pow *= n;
	}

	if (k >= 0)
	{
		return pow;
	}
	else
	{
		return 1.0 / pow;
	}
}
