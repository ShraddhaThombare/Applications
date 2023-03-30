#include<stdio.h>

// Structure Declaration
// There is NO memmory allpcation at this point
struct Demo
{
    int i;          // 4
    float f;        // 4
    int j;          // 4
    double d;       // 8
};

int main()
{
    // structure object / variable creation
    // Memory gets allocated at this point
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

    // Member initialisation
    obj1.d = 11.0;
    obj2.i = 21;
    obj3.j = 51;

    printf("Size of obj1 is : %d\n",sizeof(obj1));  // 20
    printf("Size of obj2 is : %d\n",sizeof(obj2));  // 20
    printf("i of obj2 is : %d\n",obj2.i);   // 21

   return 0;
}

struct Demo
{
    int i;      
    char ch;
};   

struct Demo obj;
struct Demo obj2;

obj.i = 11;         // Allowed
obj.ch = 'A';       // Allowed




struct Demo
{
    int no;
    int i;
};

struct Demo obj2;   // 2






struct Marvellous
{
    int *ip;
    float *fp;
};

int no = 11;
float f = 10.67;

struct Marvellous obj;

obj.ip = &no;
obj.fp = &f;














no;         11
f;      10.67
&no;        // 200
&f;         // 300
sizeof(no);     4
&obj;       / 100
obj.ip;         // 200
sizeof(obj);        // 16
&(obj.fp);          // 108
*(obj.fp);          // 10.67


struct PPA
{
    int Arr[3];     // 12
    float Brr[2];   // 8
};  //  20

struct PPA obj;

obj.Arr[0] = 11;
obj.Arr[1] = 21;
obj.Arr[2] = 51;
obj.Brr[0] = 10.1;
obj.Brr[1] = 20.1;