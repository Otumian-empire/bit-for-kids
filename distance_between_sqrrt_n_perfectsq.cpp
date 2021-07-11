/**
 * author: popecan1000@gmail.com
 * auth_repo: http://github.com/otumian-empire
 * date: 9th July, 2021
 * title: The distance between a square root and its perfect square
 * description: a program that computes and displays the range between a square root and it's perfect square
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	const int limit = 100;
	int num = 0;

	cout << "Nums" << setw(20)
		 << "Perfect squares" << setw(20)
		 << "Square root" << setw(20)
		 << "Range" << endl;

	while (num <= limit)
	{
		cout << num << setw(20)
			 << (num * num) << setw(20)
			 << sqrt(num) << setw(20)
			 << abs((num * num) - sqrt(num)) << endl;
		num++;
	}

	return 0;
}
