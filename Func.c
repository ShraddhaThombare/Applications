#include<stdio.h>

void Demo()
{
    printf("Inside Demo\n");
}

int Add(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int Ret = 0;
    Demo();
    Ret = Add(11,10);
    printf("%d\n",Ret);
    return 0;
}