#include <iostream>
using namespace std;


class Employee {

    public:
        int id;
        string name;

        void insert(int i, string n)
        {
            id = i;
            name = n;
        }

        void display()
        {
            cout << id << " " << name;
        }
};


int main()
{
    Employee e;
    e.insert(100, "shovon");
    e.display();
    return 0;
}





