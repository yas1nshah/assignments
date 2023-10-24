# include <iostream>
using namespace std;

int main(){

    int x;
    int y;
    cin>>x;
    cin>>y;
    
    if(y%x == 0){
        cout<<x<<"Nmber x is a multiple of y";
    }
    else{
        cout<<"number x is not a multiple";
    }
    return 0;
}