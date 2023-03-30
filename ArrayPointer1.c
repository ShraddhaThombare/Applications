#include<stdio.h>

int main()
{
    int Arr[4] = {10,20,30,40};
    int *p = &(Arr[0]);
    int *q = &(Arr[3]);

    printf("%d\n",Arr[0]); // 10 
    printf("%d\n",*p);      // 10
    printf("%d\n",Arr[3]);  // 40
    printf("%d\n",*q);      // 40
    
    return 0;
}

P + 2;
P + 2 * sizeof(pointed data type);
p + 2 * sizeof(int);
p + 2 * 4;
p + 8;
100 + 8;
108


q - 2;
q - 2 * sizeof(Pointed data type);
q - 2 * sizeof(int);
q - 2 * 4;
q - 8;
112 - 8;
104;


q - p;
(q - p) / sizeof(pointer type);
(q - p) / sizeof(int);
(q - p) / 4;
(112 - 100) / 4;
12 / 4
3