#include<stdio.h>

int main()
{
    int no1 = 10;
    const int no2 = 10;

    printf("%d\n",no1);
    printf("%d\n",no2);

    no1++;         // A
    no2++;          // NA
    
    no1 = 20;       // A
    no2 = 20;       // NA

    no1--;          // A
    no2--;          // NA

    return 0;
}