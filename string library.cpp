#include<iostream>
#include<string> //////////Add the string library

using namespace std;

int main()
{
    /////////////String Concatenation///////////////

    string firstName;
    cin >> firstName;
    string lastName;
    cin >> lastName;
    string name = firstName + " " + lastName;
    cout <<"\n" << name;

    /////////////Append////////////////////////////

    firstName = "shovon";
    lastName = "ahammed";
    name = firstName.append(lastName).append("APPENDED");
    cout <<"\n Using append- " << name;

    ////////////Length////////////////////////////

    name = "Shovon Ahammed";
    cout << "\nThe length of my name is: " << name.length();

    ////////////Access Strings/////////////////////
    char firstChar = name[0];
    cout << "\n First character of my name is: " << firstChar;

    /////////Change string character/////////////////

    name[0] = 'A'; //////////// Use single quote///////////////
    cout << "\n After changing the first character my name: " << name;

}
