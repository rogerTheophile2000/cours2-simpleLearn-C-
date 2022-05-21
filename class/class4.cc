#include <iostream>
using namespace std;

class Gambit
{
public:
    Gambit()
    {
        cout << "Hello im in constructor" << endl;
    }
    ~Gambit()
    {
        cout << "Hello im in destructor" << endl;
    }
    void display()
    {
        cout << "Hello" << endl;
    }
};

int main()
{
    Gambit gam;
    gam.display();

    return 0;
}