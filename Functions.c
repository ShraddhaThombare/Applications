#include<stdio.h>

int X = 20;     // Data

int Multiplication(int No1, int No2)
{
        register int Ans = 0;
        Ans = No1 * No2;
        return Ans;
}

int main()
{
        int A = 10, B = 11;
        auto int Ret = 0;

        Ret = Multiplication(A,B); 
        
        printf("Multiplication is : %d\n",Ret);

        return 0;
}
// OS -> main() -> Multiplication() -> main() -> OS