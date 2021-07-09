/**
 * author: popecan1000@gmail.com
 * auth_repo: http://github.com/otumian-empire
 * date: 9th July, 2021
 * title: Population
 * description: A program to determine how long it takes for a population to reach a particular size.
 * source: https://cs50.harvard.edu/college/2020/fall/labs/1/
 */

/* Detailed description
Say we have a population of n dogs. Each year, n / 3 new dogs are born, and n / 4 dogs pass away.

For example, if we were to start with n = 1200 dogs, then in the first year, 1200 / 3 = 400 new dogs would be born and 1200 / 4 = 300 dogs would pass away. At the end of that year, we would have 1200 + 400 - 300 = 1300 dogs.

To try another example, if we were to start with n = 1000 dogs, at the end of the year, we would have 1000 / 3 = 333.33 new dogs. We can’t have a decimal portion of a llama, though, so we’ll truncate the decimal to get 333 new dogs born. 1000 / 4 = 250 dogs will pass away, so we’ll end up with a total of 1000 + 333 - 250 = 1083 dogs at the end of the year.

If the user enters a number less than 9 (the minimum allowed population size), the user should be re-prompted to enter a starting population size until they enter a number that is greater than or equal to 9. (If we start with fewer than 9 dogs, the population of dogs will quickly become stagnant!)

If the user enters a number less than the starting population size, the user should be re-prompted to enter an ending population size until they enter a number that is greater than or equal to the starting population size. (After all, we want the population of dogs to grow!)
*/

#include <iostream>
using namespace std;

int main()
{
	int const MIN_ALLOWED_POPULATION = 9;
	int const BIRTH_FACTOR = 3;
	int const DEATH_FACTOR = 4;

	int start_size = 0, end_size = 0, years = 0;

	do
	{
		cout << "Start size: ";
		cin >> start_size;
	} while (start_size < MIN_ALLOWED_POPULATION);

	do
	{
		cout << "End size: ";
		cin >> end_size;
	} while (end_size < start_size);

	while (start_size < end_size)
	{
		years++;
		start_size += (int)((start_size / BIRTH_FACTOR) - (start_size / DEATH_FACTOR));
	}

	cout << "Years: " << years << endl;

	return 0;
}
