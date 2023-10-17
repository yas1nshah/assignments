# include<iostream>
using namespace std;

int main(){

    int salary,grade,new_salary;
  
    cout<<"Enter Salary ";
    cin>>salary;

    cout<<"Enter Grade ";
    cin>>grade;

    if(grade <= 16){
     
        new_salary = salary + (salary * 10/100);
        cout<<"Your New salary is"<<new_salary;
    }
    else{
        
        new_salary = salary + (salary * 5/100);
        cout<<"Your New salary is"<<new_salary;
    }

    return 0;
}