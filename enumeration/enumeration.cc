#include <iostream>

using namespace std;

enum Captain
{
    Avi,
    Sid,
    Robby,
    Samy,
    Jake
};

int main(int argc, char const *argv[])
{
    Captain cap = Avi;

    if (cap == Jake)
        cout << "Our captain is Avi and it's value is : " << Avi << endl;
    else
        cout << "He is not our captain";
    return 0;
}
