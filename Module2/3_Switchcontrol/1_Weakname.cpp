//Wap to print weekname after taking input as weekno?
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the no: ";
    cin>>a;
    switch (a){
        case 1:
        cout<<"monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"wednesday";
        break;
        case 4:
        cout<<"Thrusday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"sunday";
        break;
        default:
        cout<<"Enter valid no";
        break;
    }

}