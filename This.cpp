#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        float f;
        double d;

    // void fun(Demo *this, int A)
    void fun(int A)
    {
        cout<<"Inside fun\n";
        cout<<this->i<<"\n";
    }

    // int gun(Demo *this , int A, int B)
    void gun(int A, int B)
    {
        cout<<"Inside gun\n";
    }
};

int main()
{   
    Demo obj1;       // 100
    Demo obj2;       // 200
    
    obj1.i = 101;
    obj2.i = 201;

    obj1.fun(11);    // fun(&obj1,11);        fun(100,11);
    obj2.fun(11);   // fun(&obj2,11);     gun(200,11);

    return 0;
}