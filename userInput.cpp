#include<iostream>

using namespace std;

int main(){

    string name;
    cout << "What is your name?\n";
    getline(cin, name);// Take user input with space
    cout << "My name is: " << name;
    cout << "\nUser input without space\n";
    cin >> name;
    cout << "My name is:" << name;
    return 0;
}
