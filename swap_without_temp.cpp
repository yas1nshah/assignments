#include <iostream>
using namespace std;

int main()
{
    int a, b;
    a = 100;
    b = 200;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
