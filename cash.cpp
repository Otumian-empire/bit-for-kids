/**
 * author: popecan1000@gmail.com
 * auth_repo: http://github.com/otumian-empire
 * date: 9th July, 2021
 * title: Cash - coins change
 * description:  A program to compute the number of coins used in given out change.
 */

/* Detailed description of the problem:
Suppose that a cashier owes a customer some change and in that cashier’s drawer are quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢). The problem to be solved is to decide which coins and how many of each to hand to the customer. Think of a “greedy” cashier as one who wants to take the biggest bite out of this problem as possible with each coin they take out of the drawer. For instance, if some customer is owed 41¢, the biggest first (i.e., best immediate, or local) bite that can be taken is 25¢. (That bite is “best” in as much as it gets us closer to 0¢ faster than any other coin would.) Note that a bite of this size would whittle what was a 41¢ problem down to a 16¢ problem, since 41 - 25 = 16. That is, the remainder is a similar but smaller problem. Needless to say, another 25¢ bite would be too big (assuming the cashier prefers not to lose money), and so our greedy cashier would move on to a bite of size 10¢, leaving him or her with a 6¢ problem. At that point, greed calls for one 5¢ bite followed by one 1¢ bite, at which point the problem is solved. The customer receives one quarter, one dime, one nickel, and one penny: four coins in total.
*/

// I realized that we are looking for the number of coins
// not the total number of individual coins used for the change

#include <iostream>

int main(void)
{
    const int quarters = 25;
    const int dimes = 10;
    const int nickles = 5;
    const int pennies = 1;

    float change_owed;  // in cents
    int cents, num_coins = 0;

    do
    {
        std::cout << "Change owed: ";
        std::cin >> change_owed;

    } while (change_owed < 0);

    cents = change_owed * 100;

    if (cents >= quarters)
    {
        num_coins += 1;
        cents %= quarters;
    }

    if (cents >= dimes)
    {
        num_coins += 1;
        cents %= dimes;
    }

    if (cents >= nickles)
    {
        num_coins += 1;
        cents %= nickles;
    }

    if (cents >= pennies)
    {
        num_coins += 1;
        cents %= pennies;
    }

    std::cout << num_coins << std::endl;

    return 0;
}
