#include <iostream>
using namespace std;

enum SuperCars
{
    Venom = 501,
    Veryon = 268,
    Valkyrie = 240,
    RoadSter = 250
};

int main(int argc, char const *argv[])
{
    SuperCars speed1;
    SuperCars speed2;

    speed1 = Valkyrie;
    speed2 = RoadSter;

    if (speed1 < speed2)
        cout << "It's a win for Roadster with the speed of " << speed2 << endl;

    else
        cout << "It's a win for Valkyrie with the speed of " << speed1 << endl;

    return 0;
}
