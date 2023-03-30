#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {   
        return false;
    }

}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter one number\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    if(bRet == true)
    {
        printf("It is even number\n");
    }
    else 
    {
        printf("It is odd number\n");
    }
    return 0;
}


// %    Mod
// ==   Equality
