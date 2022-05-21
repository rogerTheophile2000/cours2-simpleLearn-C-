#include <iostream>
using namespace std;

int main()
{

    int sum{0};
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    cout << "Sum is : " << sum;

    return 0;
}