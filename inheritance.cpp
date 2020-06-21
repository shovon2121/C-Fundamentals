#include<iostream>

using namespace std;

class Car
{
    public: string name = "Ferrari";
};

class Ferrari: public Car
{
    public: int model = 8080;
};

class Human
{
    public: string nam = "shovon";
};

class Student: public Human
{
    public: void nameIs()
    {
        cout << " \n The name of the human is: " << nam;
    }
};

int main()
{
    Ferrari ferrari;

    cout << "The name of the car is: " << ferrari.name;
    cout << "\nThe model of the car is: " << ferrari.model;

    ////////////////////// Accessing private members using inheritance//////

    Student student;
    student.nameIs();
}
