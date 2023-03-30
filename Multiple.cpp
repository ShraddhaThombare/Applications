#include<iostream>
using namespace std;

class Base1         // 4
{
    public:
        int A;

        Base1()
        {
            cout<<"Base1 Constructor\n";
        }
        ~Base1()
        {
            cout<<"Base1 Destructor\n";
        }
        void fun()
        {
            cout<<"Base1 fun\n";
        }
};

class Base2         // 12
{
    public:
        int I,J,K;
        Base2()
        {
            cout<<"Base2 Constructor\n";
        }
        ~Base2()
        {
            cout<<"Base2 Destructor\n";
        }
        void gun()
        {
            cout<<"Base2 gun\n";
        }
};
// Not allowed in Java
class Derived : public Base1, public Base2     // 24
{
    public:
        int X,Y;
        Derived()
        {
            cout<<"Derived Constructor\n";
        }
        ~Derived()
        {
            cout<<"Derived Destructor\n";
        }
        void sun()
        {
            cout<<"Derived sun\n";
        }
};

int main()
{
    Derived dobj;

    dobj.fun();     // Base1
    dobj.gun();     // Base2
    dobj.sun();     // Derived

    return 0;
}