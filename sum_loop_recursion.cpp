/**
 * author: popecan1000@gmail.com
 * auth_repo: http://github.com/otumian-empire
 * date: 11th July, 2021
 * title: Sum a to b inclusive using a loop and Recursion 
 * description: a function that takes a and b as argument and returns the sum from a to b, inclusive.
 * source:https://github.com/Otumian-empire/sicp-python/blob/master/src/code4.py
 */

#include <iostream>
using namespace std;

int sum_integer_recursion(int a, int b);
int sum_integer_loop(int a, int b);

int main()
{
    cout << sum_integer_recursion(1, 10) << endl;
    cout << sum_integer_loop(1, 10) << endl;
}

// original implementation from source
// int sum_integer_recursion(int a, int b)
// {
//     int r = 0;

//     if (a <= b)
//     {
//         r = a + sum_integer_recursion(a + 1, b);
//     }

//     return r;
// }

// int sum_integer_loop(int a, int b)
// {
//     while (a <= b)
//     {
//         cout << a << endl;
//         a += 1;
//     }

//     return a;
// }

int sum_integer_recursion(int a, int b)
{
    if (a > b)
        return 0;

    return a++ + sum_integer_recursion(a, b);
}

int sum_integer_loop(int a, int b)
{
    for (int i = a + 1; i <= b; i++)
    {
        a += i;
    }

    return a;
}
