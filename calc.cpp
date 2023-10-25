#include <iostream>
using namespace std;

int main(){
    int a,b;
    int operation;

cout<<"Enter 1st num "<<endl;
cin>>a;

cout<<"Enter 2nd num "<<endl;
cin>>b;

cout<<"Wat do you want to perform?\n 1. Add \n 2. Subtract \n 3. Divide \n 4. Multiply \n Enter the Number of operation.\n";
cin>>operation;

switch(operation){
    case 1:
    {
        int sum;
        sum = a+b;
        cout<<"sum is"<< sum<<endl;
        break;
    }
    case 2:
    {
        int sub;
        sub = a-b;
        cout<< "Subtraction is"<<sub<<endl;
        break;
    }
    case 3:
    {
        if(b!=0){
            int div;
            div = a/b;
        cout<< "Division is "<< div<<endl;
        }
        else{
            cout<<"Answer is infinity";
        }
        break;
    }
    case 4:
    {
        int mul;
        mul = a*b;
        cout<<"Multiplication is "<< mul<<endl;
        break;
    }
    default:
    {
        cout<<"Enter a valid operation"<<endl;
    }
}
    return 0;
}