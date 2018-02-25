#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
   return x*x-x-1 ;
}
float f1(float x)
{
   return 2*x-1;
}
void main()
{
   int i;
   float b,h,max,m,e=0.0001;
   clrscr();
   printf("Enter value of b and maxiterations:");
   scanf("%f\t%f",&b,&max);
   i=1;
   while(i<=max)
   {
     printf("\ni=%d,b=%f,m=%f,f(m)=%f",i,b,m,f(m));
     h=f(b)/f1(b);
     m=b-h;
     if(fabs(h)<e)
     {  printf("root=%f",m);
       return 0;}
     b=m;
     i++;
   }
   printf("\nroot = %f",m);
   getch();
}