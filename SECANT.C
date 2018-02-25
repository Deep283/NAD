#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
   return x*x-x-1 ;
}
void main()
{
   int i;
   float a,b,m,e=0.0001;
   clrscr();
   printf("Enter value of a and b:");
   scanf("%f \t %f",&a,&b);
   if(f(a)*f(b) > 0)
   {
     printf("Invalid interval"); }
   else{
     m = (a*f(b)-b*f(a))/(f(b)-f(a));
     i=1;
     while(fabs(f(m))>e)
     {
       printf("\ni=%d,a=%f,b=%f,m=%f,f(m)=%f,f(a)*f(m)=%f",i,a,b,m,f(m),f(a)*f(m));
       a=b;
       b=m;
       m=(a*f(b)-b*f(a))/(f(b)-f(a));
       i++;
     }
     printf("\ni=%d,a=%f,b=%f,m=%f,f(m)=%f,f(a)*f(m)=%f",i,a,b,m,f(m),f(a)*f(m));
     printf("\nroot = %f",m);
   }
   getch();
}