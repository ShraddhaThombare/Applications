#include<stdio.h>

#pragma pack(1)     // 1    2   4   8   16
struct Demo
{
    int i;      // 4
    float f;    // 4
    char ch;    // 1
    float d;   // 4
};              //13


int main()
{
    struct Demo dobj;

    printf("Size of the strcucture is : %d\n",sizeof(dobj));

    return 0;
}