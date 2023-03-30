#include<iostream>
#include<stdlib.h>
using namespace std;

class Demo
{
    public:
        int x;
        int y;

        Demo()
        {
            cout<<"Inside constructor"<<"\n";
        }
        ~Demo()
        {
            cout<<"Inside destructor"<<"\n";
        }
        void Fun()
        {
            cout<<"Inside fun"<<"\n";
        }
};

int main()
{
    Demo * ptr = NULL;

    ptr = (Demo *)malloc(sizeof(Demo));
    // ptr = new Demo;

    ptr->Fun();

    free(ptr);
    // delete ptr;
    return 0;
}