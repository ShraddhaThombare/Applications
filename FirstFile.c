#include<stdio.h>

int A = 10;         // Global variable

extern int B;
extern int C;

int main()
{
    printf("Value of A is : %d\n",A);
    printf("Value of B from other file is : %d\n",B);
    printf("Value of C from other file is : %d\n",C);

    return 0;
}

// gcc FirstFile.c SecondFile.c -o Myexe
//./Myexe