#include<stdio.h>

int main()
{
    int no1 = 10;
    int no2 = 20;
    int no3 = 30;

    int *p = NULL;

    p = &no1;
    printf("%d\n",*p);      // 10

    p = &no2;
    printf("%d\n",*p);      // 20

    return 0;
}