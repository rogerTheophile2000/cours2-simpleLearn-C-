#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int sum{0};
    int sub{0};
    int *ptr1;
    int *ptr2;
    cout << "Enter two numbers : " << endl;
    cin >> num1 >> num2;
    ptr1 = &num1;
    ptr2 = &num2;
    (*ptr1)++;
    (*ptr2)++;

    cout << "After increment : ";
    cout << ptr1 << endl;
    cout << ptr2 << endl;

    sum = *ptr1 + *ptr2;
    cout << "Addtion " << sum << endl;

    (*ptr1)--;
    (*ptr2)--;

    cout << "After decrincrement : ";
    cout << ptr1 << endl;
    cout << ptr2 << endl;

    sum = *ptr1 - *ptr2;
    cout << "Substraction " << sum << endl;
}