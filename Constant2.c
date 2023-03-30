#include<stdio.h>

int main()
{
    int Arr[3] = {10,20,30};

    const int Brr[3] = {10,20,30};
    
    Arr[1] = 21;    // A
    Brr[1] = 21;    // NA

    Arr[2]++;       // A
    Brr[2]++;       // NA
    
    return 0;
}





























