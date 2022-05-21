#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int i{7}, j{10};

    cout << "Value of i " << i << endl;
    cout << "Value of j " << j << endl;

    swap(i, j);
    cout << "Value of i after swapping " << i << endl;
    cout << "Value of j after swapping " << j << endl;

    return 0;
}
