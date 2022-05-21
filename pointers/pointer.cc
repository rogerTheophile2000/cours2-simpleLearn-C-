#include <iostream>
using namespace std;

int main()
{
    int val{105};
    int *ptr;

    ptr = &val;

    cout << "Value of val is : " << val << endl;

    cout << "Value of ptr is : " << ptr << endl;

    cout << "Value of *ptr is : " << *ptr << endl;

    system("pause > 0");
}