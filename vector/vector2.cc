#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> num;
    for (int i = 0; i <= 5; i++)
    {
        num.push_back(i);
    }

    cout << "output from the begining to the end : ";
    for (auto a = num.begin(); a != num.end(); a++)
    {
        cout << *a << " ";
    }

    return 0;
}
