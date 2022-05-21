#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
    }

    cout << "Size of the vector : " << v.size() << endl;

    v.resize(7);
    cout << "Size of the vector after : " << v.size() << endl;

    if (v.empty() == false)
        cout << "not empty" << endl;
    else
        cout << "It's empty" << endl;

    cout << "Elements of vector";
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " " << endl;
    }
    return 0;
}
