#include <iostream>
using namespace std;

int main(){
    int a;
    int b; 
    int c;

    int max;
    cout<<"Enter 3 Ints seprated by space:"<<endl;
    cout<<"Enter a  ";
    cin>>a;
    cout<<"Enter b ";
    cin>>b;
    cout<<"Enter c ";
    cin>>c;

   
   if (a>b){
    max = a;
   }
   
   if (a>c){
    max = a;
   }

cout<<a<<" is greatest";

    return 0;
}