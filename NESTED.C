# include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("enter the number");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
 {
   if(a>c)
   {
    printf("A is greater");
   }
   else
   {
    printf("C is greater");
   }
 }
 else if(b>c)
 {
  if(b>a)
  {
    printf("B is greater");
  }
   else
   {
    printf("A is greater");
   }
 }
 getch();
}