#include <stdio.h>
#include<conio.h>
main ()
{
int i=1, t1=1, t2=1, t3;
clrscr();
do
{
t3=t1+t2;
t1=t2;
t2=t3;
i++;
}
while (i<=10);
printf ("\n %d", t3);
getch();
return 0;
}