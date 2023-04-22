#include<iostream>
using namespace std;

int Addi(int i, int j)
{
    int ans = 0;
    ans = i + j;
    return ans;
}

float Addf(float i, float j)
{
    float ans = 0;
    ans = i + j;
    return ans;
}

int main()
{
    int a = 10, b = 11, iret = 0;
    float x = 90.1f, y = 67.8f, fret = 0.0f;
    iret = Addi(a,b);
    fret = Addf(x,y);
    cout<<"Addition of integers : "<<iret<<"\n";
    cout<<"Addition of floats : "<<fret<<"\n";
    return 0;
}