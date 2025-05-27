/*WAP using a do-while loop to repeatedly prompt 
the user to enter a number between 5 and 10*/
#include<iostream>
using namespace std;
int main(){
   int n;
    do{
        cout<<"Wrong Enter a no between 5 and 10 : ";
        cin>>n;
    }
    while(n<=5 || n>=10);
    cout<<"correct";
}