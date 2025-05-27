/*WAP to input a number and keep asking until it is between 
5 and 10 (exclusive) Once a valid number is entered,
 display “Thanks”.*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the no : ";
    cin>>a;
    int i;
    while(a<=5 || a>=10){
        cout<<"The no is Invalid enter between 5 and 10 again";
        cin>>a;
        
    }
    cout<<"Thanks";
}


