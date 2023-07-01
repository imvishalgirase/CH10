#include<stdio.h>
#include<conio.h>
void main()
{
   int a=1,p,x;
   clrscr();
   printf("Enter the value of table u want=");
   scanf("%d",&p);
   printf("Plz tell how many term you want=");
   scanf("%d",&x);
   while(a<=x)
   {

     printf("%d*%d=%d\n",p,a,p*a);
     a++;
     }
     getch();
     }