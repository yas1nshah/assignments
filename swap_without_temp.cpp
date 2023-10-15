#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout<< "Enter 1st Int: ";
    cin >> a;
    cout << "Enter 2nd Int: ";
    cin >> b;


    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
