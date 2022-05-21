#include <iostream>
using namespace std;

int main()
{

    int a[3][3] = {{5, 4, 1}, {2, 7, 9}, {1, 3, 8}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
    }

    return 0;
}