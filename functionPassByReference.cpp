#include<iostream>

using namespace std;

void swap(int* x, int* y );

int main()
{
    int a = 10;
    int b = 5;
    cout<< "Before swapping- a = " << a << "\tb = " << b;
    swap(&a, &b);
    cout << "\nAfter swapping the values are- a = " << a << "\tb = " << b;
}

void swap(int* x , int* y)
    {
        int tmp = *x;
        *x = *y;
        *y = tmp;
    }
