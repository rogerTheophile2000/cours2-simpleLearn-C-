#include <iostream>
using namespace std;

class Test
{
    int num;

public:
    Test &assign(int num)
    {
        this->num = num;
        return *this;
    }

    void display()
    {
        cout << "The valude of num is : " << num << endl;
    }
};

int main()
{

    Test n1;
    n1.assign(100).display();

    return 0;
}