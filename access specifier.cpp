#include<iostream>

using namespace std;

class MyClass
{
    public: int x; /////////////////By default all members are public///////////
    private: int y;
};

int main()
{
    MyClass obj;
    obj.x = 5;

    //obj.y = 22; as the access specifier is private we can not access this outside of the class

}
