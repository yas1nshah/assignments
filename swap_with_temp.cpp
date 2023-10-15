#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<< "Enter 1st Int: ";
    cin >> a;
    cout << "Enter 2nd Int: ";
    cin >> b;


    c = b;
    b = a;
    a = c;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}