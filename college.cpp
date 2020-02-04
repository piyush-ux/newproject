#include<iostream>
#include<conio.h>
using namespace std;


int main(){

    int grade ,salary;
    cout<<"enter the salary";
    cin>>salary;
    cout<<"enter the grade";
    cin>>grade;
    if(salary>=10000){

      if(grade==1) {
        salary = salary+500;
      }else{
          salary =salary+200;
    }
    }else{
        if(salary<=10000){
           if (grade==1){
           salary= salary+300;

}else{
    salary = salary+100;
}

        }

    }
    cout<<"now the salary is"<<salary;
    getch();





}

