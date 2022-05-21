#include <iostream>
using namespace std;

void Swap(int &n1, int &n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    int x{12};
    int y{17};

    cout << "Before swapping : " << x << endl;
    cout << "After swapping y valure is " << y << endl;

    Swap(x, y);
    cout << "Before swapping : " << x << endl;
    cout << "After swapping y valure is " << y << endl;

    return 0;
}