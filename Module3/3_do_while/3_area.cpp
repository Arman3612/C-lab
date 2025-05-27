/*WAP to calculate the area of a rectangle repeatedly
using a do-while loop until the user enters 'N' or 'n'.*/
#include<iostream>
using namespace std;
int main(){
    char choice;
    float a,b,area;
    do{
        cout<<"Enter the lenght and breadth of the reactangle: ";
        cin>>a>>b;
        area=a*b;
        cout<<"area of rectangle: "<<area<<endl;
        cout<<"Want to calculate more: Y/N : ";
        cin>>choice;

    }while(choice=='Y' || choice== 'y');
    cout<<"End";
}