/**
 * author: popecan1000@gmail.com
 * auth_repo: http://github.com/otumian-empire
 * date: 9th July, 2021
 * title: Temperature Conversion
 * description: a program that reads in a temperature in degrees Fahrenheit and returns the corresponding temperature in degrees Celsius. The conversion formula is C = 5/9 (F - 32)
 */

#include <iostream>

using namespace std;

int main()
{
	float deg_celcius, deg_fahrenheit;

	cout << "enter temperature in degree Fahrenheit: ";
	cin >> deg_fahrenheit;

	deg_celcius = 5 * (deg_fahrenheit - 32) / 9;

	cout << "The corresponding equivalence in degree Celsius is, " << deg_celcius << endl;

	return 0;
}
