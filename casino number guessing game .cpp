#include <iostream>
using namespace std;

int main() {
    int number = 50;
    int guess;

    cout << "Guess the number between 1 and 100: ";
    cin >> guess;

    if (guess == number) {
        cout << "Correct! You won!";
    }
    else {
        cout << "Wrong guess!";
    }

    return 0;
}
