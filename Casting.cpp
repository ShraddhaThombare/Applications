#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
};

class Derived : public Base
{
    public:
        int X,Y;

};

int main()
{
    Base * bp = NULL;
    Derived *dp = NULL;

    Base bobj;
    Derived dobj;

    bp = &bobj;     // No casting       A
    dp = &dobj;     // No casting       A
    bp = &dobj;     // Upcasting        A
    // dp = &bobj;     // Downcasting      NA

    return 0;
}