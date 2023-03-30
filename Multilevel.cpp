#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

        Base()
        {
            cout<<"Inside Base constructor\n";
        }
        ~Base()
        {
            cout<<"Inside Base destructor\n";
        }
        void fun()
        {
            cout<<"Inside Base fun\n";
        }
};

class Derived : public Base     // class Derived extends Base  (Syntax of Java)
{   
    public:
        int X,Y;
        
        Derived()
        {
            cout<<"Inside derived constructor\n";
        }
        ~Derived()
        {
            cout<<"Inside derived destrcutor\n";
        }
        void gun()
        {
            cout<<"Inside gun of Derived\n";
        }
};

class DerivedX : public Derived
{
    public:
        int i,j;
        DerivedX()
        {
            cout<<"Inside DerivedX constructor\n";
        }
        ~DerivedX()
        {
            cout<<"Inside DerivedX destructor\n";
        }
        void sun()
        {
            cout<<"Inside DerivedX sun\n";
        }
};

int main()
{
    cout<<"Size of Base : "<<sizeof(Base)<<"\n";            // 8
    cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";      // 16
    cout<<"Size of DerivedX : "<<sizeof(DerivedX)<<"\n";    // 24

    DerivedX dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();
    
    return 0;
}