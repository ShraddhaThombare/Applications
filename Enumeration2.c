#include<stdio.h>

enum days { Monday = 2, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main()
{
    enum days obj;

    printf("Size of enum %d\n",sizeof(obj));
    printf("Monday : %d\n",Monday);
    printf("Tuesday : %d\n",Tuesday);
    printf("Wednesday : %d\n",Wednesday);
    printf("Thursday : %d\n",Thursday);

    //Monday++;

    //printf("%d\n",&Monday);
    return 0;
}