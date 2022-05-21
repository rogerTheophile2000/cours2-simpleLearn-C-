#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    enum Color
    {
        red,
        blue,
        green,
        yellow
    };

    Color select = blue;

    switch (select)
    {
    case red:
        cout << "It's red";
        break;
    case blue:
        cout << "It's blue";
        break;
    case yellow:
        cout << "It's yellow";
        break;
    case green:
        cout << "It's green";
        break;
    }

    return 0;
}
