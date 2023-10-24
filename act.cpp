#include<iostream>
#include<string>

using namespace std;

int main(){

string name, pass;
int pin;


cout<<"Register yourself"<<endl;
cout<<"Enter your name"<<endl;
cin>>name;
cout<<"Enter your password"<<endl;
cin>>pass;
cout<<"Enter your pin"<<endl;
cin>>pin;
cout<<"Congrats youre registered"<<endl;


cout<<"Now Login"<<endl;

string name2, pass2;
int pin2;
cout<<"Enter your name"<<endl;
cin>>name2;
cout<<"Enter your password"<<endl;
cin>>pass2;
cout<<"Congrats youre registered"<<endl;
cin>>pin2;

if(name == name2 && pass == pass2){

    if(pin == pin2){

    cout<<"Youre logged in";
    }
    else{
        cout<<"wrong pin";
    }
}
else{
    cout<<"Wrong creds";
}

    return 0;
}