#include <iostream>
#include <string>
using namespace std;

int main() {
    string password = "secret123";
    string input;
    int attempts = 0;

    while (attempts < 3) {
        cout << "Enter password: ";
        cin >> input;

        if (input == password) {
            cout << "Access granted!\n";
            break;
        } else {
            attempts++;
            cout << "Wrong. Attempts left: " << (3 - attempts) << "\n";
        }
    }

    if (attempts == 3) {
        cout << "Locked out!\n";
    }

    return 0;
}