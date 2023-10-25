#include <iostream>
using namespace std;

int main() {
    char x;
    cout << "Enter a vowel: ";
    cin >> x;

    switch (x) {
        case 'a': {
            cout << "It's a vowel";
            // break;
        }
        case 'e': {
            cout << "It's a vowel";
            // break;
        }
        case 'i': {
            cout << "It's a vowel";
            // break;
        }
        case 'o': {
            cout << "It's a vowel";
            // break;
        }
        case 'u': {
            cout << "It's a vowel";
            // break;
        }
        default: {
            cout << "It's not a vowel";
            // break;
        }
    }

    return 0;
}
