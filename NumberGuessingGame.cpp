#include <iostream>
using namespace std;

int main() {
    int secret = 42;
    int guess;

    while (true) {
        cout << "Guess the number: ";
        cin >> guess;

        if (guess < secret) {
            cout << "Too low!\n";
        } else if (guess > secret) {
            cout << "Too high!\n";
        } else {
            cout << "Correct!\n";
            break;
        }
    }

    return 0;
}