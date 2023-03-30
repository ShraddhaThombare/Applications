#include<iostream>
using namespace std;
// Class Declaration
class Maths     
{
    public:                     // Access Specifier
        int iNo1;               // Characteristics
        int iNo2;               // Characteristics

    Maths()                     // Constructor (Default)
    {
        cout<<"Inside Default constructor\n";
        iNo1 = 0;
        iNo2 = 0;
    }

    Maths(int A, int B)         // Constructor (Parametrised)
    {
        cout<<"Inside Parametrised constructor\n";
        iNo1 = A;
        iNo2 = B;
    }

    ~Maths()
    {
        cout<<"Inside Destructor\n";
        // Destructor
    }
    // int Addition(Maths *this)
    int Addition()             // Behaviour
    {
        return iNo1 + iNo2;
    }
    // int Substraction(Maths *this)
    int Substraction()          // Behaviour
    {
        return iNo1 - iNo2; 
    }
};

int main()
{
    cout<<"Inside main function\n";
    
    Maths mobj1;
    Maths mobj2(11,10); 
    int ret = 0;

    ret = mobj2.Addition(); // ret = Addition(&mobj2); 
    // ret = Addition(200);
    cout<<"Addition is : "<<ret<<"\n";

    ret = mobj1.Substraction(); // ret = Substraction(&mobj1)
    // ret = Substraction(100)
    cout<<"Substraction is : "<<ret<<"\n";

    return 0;
}