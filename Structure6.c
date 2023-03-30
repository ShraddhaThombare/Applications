#include<stdio.h>

struct Hello
{
    int C;
    float D;
    struct Demo
    {
        int A;
        int B;
    }dobj;
};  // 16

int main()
{
    struct Hello hobj;

    hobj.C = 11;
    hobj.D = 10.9;
    hobj.dobj.A = 21;
    hobj.dobj.B = 51;

    return 0;
}