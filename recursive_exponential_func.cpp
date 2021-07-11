/**
 * author: popecan1000@gmail.com
 * auth_repo: http://github.com/otumian-empire
 * date: 11th July, 2021
 * title: Recursive Exponential function
 * description: a function that computes b exponent n, using recursion
 * source: https://github.com/Otumian-empire/sicp-python/blob/master/src/code2.py
 */

#include <iostream>
using namespace std;

int expo(int b, int n);

int main()
{
    cout << expo(2, 3) << endl; // 8
}

int expo(int b, int n)
{
    if (n == 0)
        return 1;

    return b * expo(b, n - 1);
}