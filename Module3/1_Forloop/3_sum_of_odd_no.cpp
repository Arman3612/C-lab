//Wap to print sum of odd no upto 5?
#include<iostream>
using namespace std;
int main(){
    int s=0;
    for(int i=0;i<=5;i++){
        if(i%2!=0){
            s+=i;
        }
    }
    cout<<s;
}