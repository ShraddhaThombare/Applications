#include<stdio.h>

// Initialised global variable
int No1 = 11;

// Non initialised global variable
int No2;

// Initialised static global variable
static int A = 10;

// Non Initialised static global variable
static int B;

// Function Defination
void Demo()
{
        int X = 10;
        static int Y = 20;
        printf("Inside Demo\n");
}


// Non initialised global
BSS : Block Starting with Symbol

// Inittialised global
Non BSS : Block starting with Value