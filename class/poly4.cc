#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "This is the function of base class" << endl;
    }
};
class Derived : public Base
{
public:
    void print()
    {
        cout << "This is the function of derived class" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Base *b;
    Derived d;
    b = &d;
    b->print();

    return 0;
}
