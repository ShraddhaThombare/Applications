#include<stdio.h>

int main()
{
    int no = 11;

    int *p = &no;

    char ch = 'A';

    char *q = &ch;

    printf("%d\n",no);  //11 
    printf("%d\n",p);   // 100
    printf("%d\n",&no); // 100
    printf("%d\n",&p);  // 200
    printf("%d\n",sizeof(no));  // 4
    printf("%d\n",sizeof(p));   // 8

    return 0;
}



int a = 10;     // 4
short int b = 10;   // 2
long int c = 10; // 8



int no = 11;


int *p  = &no;



int **q = &p;



int ***x = &q;



int ****y = &x;



int **a = &p;



int ***b = &q;











                                            int no = 11;


                                            int *p = &no;





                                            double d = 9.789;


                                            double *q = &d;





no                  11
&no                 100
sizeof(no)          4
q                   200
*x                  200
**b                 100
sizeof(b)           8
&y                  500
&p                  200
*p                  11
****y               11
***x                11
***b                11
sizeof(p)           8
sizeof(***x)        4
&(**q)              100
&(***x)             100




int no = 11;
int *p = &no;
int *q = &no;






























