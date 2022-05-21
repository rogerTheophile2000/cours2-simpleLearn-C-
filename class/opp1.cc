#include <iostream>
using namespace std;

class Animal
{
public:
    void speed()
    {
        cout << "Who is more faster ? " << endl;
    }
};

class Dolphin : public Animal
{
public:
    void speed()
    {
        cout << "I'm faster in water " << endl;
    }
};
class Cheetah : public Animal
{
public:
    void speed()
    {
        cout << "I'm faster in the ground " << endl;
    }
};

int main()
{
    Animal a;
    Cheetah b;
    Dolphin c;

    a.speed();
    b.speed();
    c.speed();

    return 0;
}