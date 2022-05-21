#include <iostream>
using namespace std;

int fibo(int num)
{
    if (num <= 1)
    {
        return num;
    }
    else
    {
        return fibo(num - 1) + fibo(num - 2);
    }
}

int main()
{
    int number;
    cout << "Enter a number : " << endl;
    cin >> number;

    for (int i{0}; i < number; i++)
    {
        cout << fibo(i) << " ";
    }

    return 0;
}