#include<stdio.h>
#include<conio.h>
main()
{
   int i=1,n,f=1;
   clrscr();
   printf("plz enter the value of n=");
   scanf("%d",&n);
   while(i<=n)
   {
      f=f*i;
      i++;
      }
      printf("factorial of enterd value is =%d",f);
      getch();
      }




