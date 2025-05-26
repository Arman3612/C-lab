#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter : ";
    cin>>a;
    int as =(int)a;
    if ((as>=65 && as<=90 ) ||(as>=97 && as<=122)){
        cout<<"Alphabet";
    }
    else{
        cout<<"no or special charater";
    }
}