#include <iostream>
using namespace std;

class animals{
public:
    int legs;
    int eggs;
    void set_attr(int leg, int egg)
    {
        legs=leg;
        eggs=egg;
    }
};

class mammals: public animals{
public:
    int number;
};

int main()
{
    mammals m1;
    m1.set_attr(2,3);
    cout<<m1.eggs<<endl;
    return 0;
}
