#include<iostream>

using namespace std;

int main()
{
        string name = "shovon";
        string *ptrName = &name; ///// contains the address of name variable
        cout << name;
        cout << "\nThe address is: " << ptrName;
        cout << "\n Accessing the value with pointer: " << *ptrName; // This is also known as dereference
        /////////////////Change the value with pointer/////////////

        *ptrName = "ahammed";
        cout << "\n Now the name variable contains: " << name;



}
