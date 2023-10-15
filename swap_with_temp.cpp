#include <iostream>
using namespace std;

main()
{
    int a, b, c;
    a = 5;
    b = 10;

    c = b;
    b = a;
    a = c;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}