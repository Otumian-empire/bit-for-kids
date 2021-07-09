/**
 * author: popecan1000@gmail.com
 * auth_repo: http://github.com/otumian-empire
 * date: 7th July, 2021
 * title: GCD - Greatest Common Divisor 
 * description: a program that computes the Greatest Common Divisor of two numbers
 				using recursion, for loop and while loop
 */
#include <iostream>

using namespace std;

// find the greatest common divisor using euclid's algo

// euclid recursive
int gcd_euclid_recursive(int x, int y);

// euclid while loop
int gcd_euclid_whileloop(int x, int y);

// euclid for loop
int gcd_euclid_forloop(int x, int y);

int main()
{
    int x = 24, y = 18;

    printf("the gcd_euclid_recursive of %d and %d is %d\n",
           x, y, gcd_euclid_recursive(x, y));
           
   cout << "the gcd_euclid_recursive of "<< x <<" and "<< y <<" is "<<gcd_euclid_recursive(x, y) << "\n";
    printf("the gcd_euclid_whileloop of %d and %d is %d\n",
           x, y, gcd_euclid_whileloop(x, y));
    // printf("the gcd_euclid_forloop of %d and %d is %d\n",
    //        x, y, gcd_euclid_forloop(x, y));

    return 0;
}

// implementation gcd_euclid_recursive
int gcd_euclid_recursive(int x, int y)
{
    return (x % y == 0) ? y : gcd_euclid_recursive(y, x % y);
}

// euclid while loop
int gcd_euclid_whileloop(int x, int y)
{
    int r;

    while (1)
    {
        r = x % y;

        if (r == 0)
        {
            return y;
        }
        else
        {
            x = y;
            y = r;
        }
    }
}

// euclid for loop
/* int gcd_euclid_forloop(int x, int y)
{
    int r;

    for (;;)
    {
        r = x % y;

        if (r != 0)
        {
            x = y;
            y = r;
        }
        else
        {
            return y;
        }
    }
}
 */
