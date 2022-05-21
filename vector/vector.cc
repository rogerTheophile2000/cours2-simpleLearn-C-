#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> n;
    n.assign(12, 1);

    cout << "The contents are : ";
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
        cout << endl;
    }

    cout << "New exemple : " << endl;
    n.push_back(2);
    int no = n.size();

    cout << "Last element : " << n[no - 1] << endl;
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
        cout << endl;
    }

    cout << "New exemple : " << endl;
    n.pop_back();
    cout << "Now the contents are : ";
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
        cout << endl;
    }
    cout << "New exemple : " << endl;
    n.insert(n.begin(), 7);
    cout << "First element is :" << n[0] << endl;

    cout << "New exemple : " << endl;
    n.clear();
    cout << "Now the sixe is : " << n.size();

    return 0;
}
