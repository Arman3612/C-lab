#include<iostream>
using namespace std;

int main() {
    int no;
    cout << "Enter the number: ";
    cin >> no;

    cout << (no == 0 ? "Neither even nor odd" : (no % 2 == 0 ? "Even" : "Odd"));

    return 0;
}