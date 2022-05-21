#include <iostream>
using namespace std;

class Parent
{
public:
    void print()
    {
        cout << "This is the function of base class";
    }
};

class Child : public Parent
{
public:
    void print()
    {
        cout << "This is the function of derived class";
    }
};

int main()
{
    Child Obj;
    Obj.print();

    return 0;
}