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

                C++ Syntax

                bp->gun();              


                C Syntax

                gun(bp);                // C language
                gun(300);           


                Assembly Syntax

                PUSH 300                // Stored in the register ESI
                MOV EAX, ESI            // EAX register contains 300
                MOV EBX, [EAX]          // EBX contains 400
                CALL [EBX + 0]          // CALL 5000        // Call to gun function


                Binary Syntax
                
                0100    0011    0001    0010    1100








*/