/**
 * author: popecan1000@gmail.com
 * auth_repo: http://github.com/otumian-empire
 * date: 9th July, 2021
 * title: Round to the nearest int
 * description: a function, Round(x), that rounds a floating-point number x, to the nearest integer.
 */

#include <iostream>
using namespace std;

int roundx(float x);

int main()
{
	float a, b, c;
	a = 4.99999;
	b = 12.344;
	c = 3.05;

	cout << a << " to the nearest integer is " << roundx(a) << endl;
	cout << b << " to the nearest integer is " << roundx(b) << endl;
	cout << c << " to the nearest integer is " << roundx(c) << endl;

	return 0;
}

/**
a roundx function that rounds floating-point numbers based om their fractional part
if the fractional part is greater than or equal to 0.5, increment by 1, 
else, clear the fractional part.
return int version of x
*/
int roundx(float x)
{
	return (x - (int)x) >= 0.5 ? (int)x + 1 : (int)x;
}

// a more readable version, comment, the
// above or as you please
/*
int roundx(float x) {
	
	// an int version of x, x is a float
	int intx = (int) x;
	
	if ((x - intx) >= 0.5) {
		return intx + 1;
	}
	
	return intx;
}
*/
