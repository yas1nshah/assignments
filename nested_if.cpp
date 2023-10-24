// enter marks 0-100
// 90-100 a
// 80+ b
// 70+ c
// 60 + d
// 50- f

#include <iostream>
using namespace std;


int main(){
    float m;
    cout<<"Enter your marks";

    cin>>m;

    if(m<100){
        if (m>90 && m>=100){
            cout<<"Your Grade is A";
            
        }
        else if (m>80 && m>=90){
            cout<<"Your Grade is B";
        }
        else if (m>70 && m>=80){
            cout<<"Your Grade is C";
        }
        else if (m>60 && m>=70){
            cout<<"Your Grade is D";
        }
        else if (m<50 && m>=60){
            cout<<"Your Fail";
        }

    }
    else{
        cout<<"Enter Marks less than 100";
    }

    return 0;

}


