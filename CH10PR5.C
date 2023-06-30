#include<stdio.h>
#include<conio.h>
void main()
{
   int t,i=1;
   clrscr();
   printf("Plz enter the value of t=");
   scanf("%d",&t);
   while(i<=t)
   {
     if(i%2==0)
     {
       printf(" %d ",i);
     }
       i++;
   }
       getch();
}
