#include "Marvellous.h"

int main()  // This is my entry point function
{
    struct Demo obj;
    int no = 11;
    float Radius = 30.6f;
    float Area = PI * Radius * Radius;

    IPTR ptr = &no;

    printf("Area is : %f\n",Area);

    printf("Value of no is %d\n",*ptr);
    
    return 0;
}

