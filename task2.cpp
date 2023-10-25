# include <iostream>
using namespace std;

int main(){
    

    int num1 = 10;
    float num2 = 3.5;

    int sum = num1 + num2;
    cout<<"Sum is: "<<sum<<endl;

    int difference = num2 - num1;
    cout<<"Difference is: "<<difference<<endl;

    int product = num1 * num2;
    cout<<"Product is: "<<product<<endl;

    int quotient = num1/num2;
    cout<<"Quotient is: "<<quotient<<endl;


    int remainder = num1 % static_cast<int>(num2);
    cout<<"Remainder is: "<<remainder;
    return 0;
}