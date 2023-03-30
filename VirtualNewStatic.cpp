#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        void fun()  {   cout<<"Base fun\n"; }       // 1000
        virtual void gun()  {   cout<<"Base gun\n"; }      // 2000 
        virtual void sun()  {   cout<<"Base sun\n"; }      // 3000
        virtual void run()  {   cout<<"Base run\n"; }      // 4000
};


class Derived : public Base
{
    public:
        int X,Y;
        void gun()  {   cout<<"Derived gun\n";  }       // 5000
        virtual void run()  {   cout<<"Derived run\n";  }       // 6000
        virtual void mun()  {   cout<<"Derived mun\n";  }      // 7000
};


int main()
{
    Base *bp = NULL;
    Derived dobj;
    bp = & dobj;        // Upcasting

    bp->fun();      // Base fun
    bp->gun();      // Derived gun
    bp->sun();      // Base sun
    bp->run();      // Derived run
    // bp->mun();      // Error

    return 0;
}



/*
// 1
Base *bp = NULL;
Derived dobj;
bp = & dobj;

// 2
Base *bp = new Derived;


// 3
Derived dobj;
Base &bref = dobj;


*/