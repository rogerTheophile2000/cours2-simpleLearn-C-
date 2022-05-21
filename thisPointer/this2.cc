#include <iostream>
using namespace std;

class King
{
public:
    void call();
    void Text()
    {
        cout << "Hello Brother !" << endl;
        this->call();
    }
};

void King::call()
{
    cout << "A" << endl;
    cout << "B" << endl;
    cout << "C" << endl;
}

int main()
{

    King obj;
    obj.Text();

    return 0;
}