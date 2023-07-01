#include<stdio.h>
#include<conio.h>
void main()
{
  int i=1,n,sum=0;
   clrscr();
   printf("Enter the value upto you want to sum=");
   scanf("%d",&n);
   while(i<=n)
   {
    sum=sum+i;
    i++;
    }
     printf("%d",sum);
     getch();
     }
