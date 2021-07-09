/**
 * author: popecan1000@gmail.com
 * auth_repo: http://github.com/otumian-empire
 * date: 9th July, 2021
 * title: Coin tossing simulation
 * description:  A program that simulate random coin tossing
 */

/* detailed description:
A coin toss simulation program based on the use of rand()
Though rand() generate pseudo-random numbers between 0 to RAND_MAX (INT_MAX)
There actually quite a smart way to do it
Any value than than half of RAND_MAX, HEAD else TAIL
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int const NUM_OF_RUNS = 50;

    size_t index = 0;
    unsigned int rand_val, half_RAND_MAX;
    string side;

    half_RAND_MAX = RAND_MAX / 2;

    for (index; index < NUM_OF_RUNS; index++)
    {
        rand_val = rand();

        if (rand_val > half_RAND_MAX)
        {
            side = "HEAD";
        }
        else
        {
            side = "TAIL";
        }

        cout << "Run " << (index + 1) << " was " << side << endl;
    }

    return 0;
}
