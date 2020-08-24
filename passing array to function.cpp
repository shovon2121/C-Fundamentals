#include<iostream>
using namespace std;

void printArr(int arr[], int length);

int main()
{
    int arr[] = {1,2,3,4,5};

    printArr(arr, 5);

    return 0;
}

void printArr(int arr[], int length)
{
    for(int i = 0; i < length; i++)
    {
        cout << arr[i] << '\n';
    }

}
