# include <iostream>
using namespace std;

int main(){
int num1, num2;

num1 = 5;
num2 = 5;

bool isEqual = num1 == num2;
cout<<"is Equal ? "<<isEqual<<endl;

bool isNotEqual = num1 != num2;
cout<<"is not Equal "<<isNotEqual<<endl;

bool isGreater = num1 > num2;
cout<<"is Greater "<<isGreater<<endl;

bool isLess = num1 < num2;
cout<<"is Less "<<isLess<<endl;

bool isGreaterOrEqual = num1 >= num2;
cout<<"is Greater Or Equal "<<isGreaterOrEqual<<endl;

bool isLessOrEqual = num1 <= num2 ;
cout<<"is less Or Equal "<<isLessOrEqual<<endl;


    return 0;
}