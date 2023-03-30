#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        void fun()  {   cout<<"Base fun\n"; }       // 1000
        virtual void gun()  {   cout<<"Base gun\n"; }      // 2000 
        virtual void sun()  {   cout<<"Base sun\n"; }      // 3000
};

class Derived : public Base
{
    public:
        int X,Y;
        void gun()  {   cout<<"Derived gun\n";  }       // 4000
        void run()  {   cout<<"Derived run\n";  }       // 5000
        virtual void mun()  {   cout<<"Derived mun\n";  }      // 6000
};

int main()
{
    Base *bp = NULL;
    Derived dobj;
    bp = & dobj;        // Upcasting

    bp->fun();      // CALL 1000
    bp->gun();      // CALL 2000
    bp->sun();      // CALL 3000

    return 0;
}