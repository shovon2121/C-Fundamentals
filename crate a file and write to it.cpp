#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string txt;
    // Create and open text file

    ofstream file("simple_file.txt");

    // Write to the file

    file << "This file is created by fstream. C++ is fun. I am loving it.";

    // Close the file

    file.close();

    // Open an existing file

    ifstream nfile("simple_file.txt");

    // Use a loop to read line by line

    while (getline(nfile, txt))
    {
        // Output the text from the file
        cout << txt;
    }
}
