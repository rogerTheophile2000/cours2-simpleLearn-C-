#include <iostream>
using namespace std;

class Franchise
{
public:
    void KFC()
    {
        cout << "We have the best chicken" << endl;
    }
    void BurgerKing()
    {
        cout << "We have the best burgers" << endl;
    }
};

int main()
{
    Franchise fran;
    fran.BurgerKing();
    fran.KFC();
}