#include<stdio.h>
#include<conio.h>
main ()
{
int i, s=0;
clrscr();
for (i=1; i<=200; i++)
{
 if (i%12==0)
 { s=s+1;
 printf ("\n %d", i);
 }
}
printf ("\n %d", s);
getch();
return 0;
}