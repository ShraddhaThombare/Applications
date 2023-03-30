#include<stdio.h>

struct Demo
{
    int i;      // 4
    float f;    // 4
    double d;   // 8
};              // 16  

union Hello
{
    int i;      // 4
    float f;    // 4
    double d;   // 8
};              // 8

int main()
{
    struct Demo dobj;
    union Hello hobj;

    printf("Size of the strcucture is : %d\n",sizeof(dobj));
    printf("Size of the union is : %d\n",sizeof(hobj));

    dobj.i = 11;
    dobj.f = 90.8;
    dobj.d = 90.5;

    hobj.d = 90.4;
    printf("%f\n",hobj.f);
    printf("%f\n",hobj.d);

    return 0;
}