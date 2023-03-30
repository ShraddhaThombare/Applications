#include<stdio.h>
int main()
{
int no = 10;
int i = 0;
i = no++;
printf("%d\n",i);
printf("%d\n",no);

i = ++no;
printf("%d\n",i);
printf("%d\n",no);

return 0;
}