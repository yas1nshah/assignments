#include <iostream>

using namespace std;

int main() {
    int choice;

    cout << "Choose an option (1, 2, or 3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You chose option 1" << endl;
            break;
        case 2:
            cout << "You chose option 2" << endl;
            break;
        case 3:
            cout << "You chose option 3" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}
