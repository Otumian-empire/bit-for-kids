/**
 * author: popecan1000@gmail.com
 * auth_repo: http://github.com/otumian-empire
 * date: 9th July, 2021
 * title: Scrabble
 * description: a program to determine which of two Scrabble words is worth more.
 * source: https://cs50.harvard.edu/college/2020/fall/labs/2/
 */

#include <iostream>
#include <cstring>

using namespace std;

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    string word1;
    string word2;

    // Get input words from both players
    cout << "Player 1: ";
    cin >> word1;
    cout << "Player 2: ";
    cin >> word2;

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Print the winner
    if (score1 > score2)
    {
        cout << "Player 1 wins!";
    }
    else if (score2 > score1)
    {
        cout << "Player 2 wins!";
    }
    else
    {
        cout << "Tie!";
    }

    cout << "\n";
}

int compute_score(string word)
{
    // Compute and return score for string
    int score = 0;
    const int A_VAL = 65, Z_VAL = 82;
    int const WORD_SIZE = word.size();

    for (int i = 0; i < WORD_SIZE; i++)
    {
        int cint_val = toupper(word[i]);

        if (A_VAL <= cint_val && cint_val <= Z_VAL)
        {
            score += POINTS[cint_val - A_VAL];
        }
    }

    return score;
}
