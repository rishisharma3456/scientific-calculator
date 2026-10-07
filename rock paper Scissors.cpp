#include <iostream>
using namespace std;

int main()
{
    int player, computer = 2;

    cout << "Rock Paper Scissors Game\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";

    cout << "Enter your choice: ";
    cin >> player;

    cout << "Computer chose: Paper\n";

    if (player == computer)
    {
        cout << "Draw!";
    }
    else if (player == 1 && computer == 2)
    {
        cout << "Computer Wins!";
    }
    else if (player == 2 && computer == 1)
    {
        cout << "You Win!";
    }
    else if (player == 3 && computer == 2)
    {
        cout << "You Win!";
    }
    else if (player == 1 && computer == 3)
    {
        cout << "You Win!";
    }
    else
    {
        cout << "Computer Wins!";
    }

    return 0;
}