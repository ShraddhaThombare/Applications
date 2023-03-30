#include<stdio.h>

int main()
{
    int Arr[4] = {11,21,51,101};

    printf("%d\n",sizeof(Arr)); //16
    printf("%d\n",sizeof(Arr[2]));  // 4

    printf("%d\n",Arr[2]);      // 51
    printf("%d\n",Arr);         // 100
    printf("%d\n",&Arr);    // 100

    printf("%d\n",Arr+1);       // 104
    printf("%d\n",(&Arr)+1);    // 116

    printf("%d\n",Arr[2]);
    printf("%d\n",*(Arr + 2));
    printf("%d\n",*(2 + Arr));
    printf("%d\n",2[Arr]);

    return 0;
}



Arr[3]
*(Arr + 3);



Arr[2];
*(Arr + 2)

// Array and pointer corelation
A[N];
is internally considered as
*(A + N);

Where A : Any name of array
Where N : Any valid positive index of that array





































