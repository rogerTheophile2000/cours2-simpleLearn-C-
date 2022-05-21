#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    int array[] = {5, 7, 22, 24, 35, 25, 7, 9, 4, 6};

    // int arr;

    ptr = array;

    for (int i = 0; i < 10; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }
}