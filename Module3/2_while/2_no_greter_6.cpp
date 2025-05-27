/*WAP to input a number and keep asking until the user 
enters a number greater than 6.Once a valid number is 
entered, display “The number you entered is valid.”*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the no: ";
    cin>>a;
    while(a<=6){
        cout<<"Enter no greater then 6: ";
        cin>>a;
    }
    cout<<"The no you enter is valid";
}