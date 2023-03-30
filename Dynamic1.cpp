#include<iostream>
using namespace std;

int main()
{
    int *p = NULL;

    p = new int[5]; // C++ & Java
    // p = (int *)malloc(5 * sizeof(int));

    // Use the memory

    delete []p; // There is no such line in Java
    // free(p);

    return 0;
}

int * p = NULL;

p = new int;



int * q = NULL;

q = new int(5);


int * x = NULL;

x = new int[5];



delete p;

delete q;

delete []x;