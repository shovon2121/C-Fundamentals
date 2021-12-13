#include<iostream>

using namespace std;

class Employee
{
    public:
        Employee()
        {
            cout << "Default constructor invoked";
        }
};

int main()
{
    Employee e;
    return 0;
}
