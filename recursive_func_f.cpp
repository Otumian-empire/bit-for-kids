/**
 * author: popecan1000@gmail.com
 * auth_repo: http://github.com/otumian-empire
 * date: 11th July, 2021
 * title: Recursion
 * description: a function F of n that returns n if n is less than 3 else returns f(n - 1) + (2 * f(n - 2))
 * source: https://github.com/Otumian-empire/sicp-python/blob/master/src/code1.py
 */

#include <iostream>
using namespace std;

int f(int n);

int main()
{
    cout << f(10) << endl; // 1892
}

int f(int n)
{
    if (n < 3)
        return n;

    return f(n - 1) + (2 * f(n - 2)) + (3 * f(n - 3));
}