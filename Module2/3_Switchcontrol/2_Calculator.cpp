//wap to print basic arithmatic operation using switch case?
#include<iostream>
using namespace std;
int main(){
    int a,b;
    char c;
    cout<<"Enter: ";
    cin>>a>>c>>b;
    switch (c){
        case ('+'):
        cout<<a+b;
        break;
        case ('-'):
        cout<<a-b;
        break;
        case ('*'):
        cout<<a*b;
        break;
        case ('/'):
        cout<<a/b;
        break;
        default:
        cout<<"Invalid";
        break;

    }

}