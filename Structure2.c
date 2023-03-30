#include<stdio.h>

struct Student
{
    int Marks;
    int Age;
    char Division;
};

int main()
{
    struct Student Amit;
    struct Student Pooja;

    Amit.Marks = 90;
    Amit.Age = 23;
    Amit.Division = 'A';

    Pooja.Marks = 98;
    Pooja.Age = 21;
    Pooja.Division = 'C';

    return 0;
}