#include<iostream>

using namespace std;

class Student
{
    string name;
    int age;
    int id;

    public: void set(string x, int y, int z)
    {
        name = x;
        age = y;
        id = z;
    }

    public: string getName()
    {
        return name;
    }

    public: int getAge()
    {
        return age;
    }

    public: int getId()
    {
        return id;
    }
};

int main()
{
    Student shovon;
    ////////////////// Accessing private instance using Setter///////////
    shovon.set("shovon", 22, 7671);
    cout << " My name is:" << shovon.getName();
    cout << "\n My age is:" << shovon.getAge();
    cout << "\n My id is:" << shovon.getId();

    return 0;
}


