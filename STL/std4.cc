#include <iostream>

using namespace std;

class functionObj
{
public:
    int operator()(int x, int y)
    {
        return x * y;
    }
};

int main(int argc, char const *argv[])
{
    functionObj fo;

    int mult = fo(4, 6);

    cout << "Multipication of x and y is : " << mult << endl;

    return 0;
}
