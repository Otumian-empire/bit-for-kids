/**
 * author: popecan1000@gmail.com
 * auth_repo: http://github.com/otumian-empire
 * date: 9th July, 2021
 * title: Kilogram to Pounds to Ounce
 * description:
 * 		A program  that  converts  a  metric  weight  in  kilograms to  the 
 * 		corresponding English weight  in pounds and ounces.
 * 		The conversion factors  you need are   
 * 		 1 kilogram  =  2.2 pounds
 * 		 1 pound =  16 ounces
 */

#include <iostream>
using namespace std;

int main()
{
	const float POUNDS_KILO_FACTOR = 2.2;
	const float OUNCES_POUNDS_FACTOR = 16.0;

	float kilo, pounds, ounces;

	cout << "enter weight in kilograms: ";
	cin >> kilo;

	pounds = kilo * POUNDS_KILO_FACTOR;
	ounces = pounds * OUNCES_POUNDS_FACTOR;

	cout << kilo << "kg = " << pounds << "pounds = " << ounces << "ounces" << endl;

	return 0;
}
