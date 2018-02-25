#include<stdio.h>
#include<conio.h>
void binary(int n,int a[4])
{ int k=3,f=0,i,f2;
  if(n<0)
  {
    f=1;
    n=n*-1;
  }
  while(n/2>=1)
  {
    a[k--] = n%2;
    n=n/2;
  }
  a[k]=n%2;
  if(f==0)
  {
    printf("entered no is positive:\n+");
    for(i=0;i<4;i++)
    {
      printf("%d",a[i]);
    }
  }
  else
  {
     printf("entered no is negative:\n-");
    for(i=0;i<4;i++)
    {
      a[i]=!a[i];
    }
   // f2=a[i];
    for(i=3;i>=0;i--)
    {
      f2=a[i];
      if(f2==1)
      {
	a[i]=0;
      }
      else
      {
	a[i]=1; break;
      }
    }
    for(i=0;i<4;i++)
    {
      printf("%d",a[i]);
    }
  }
}
void main()
{
  int n;
  int b[4],a[4] = { 0,0,0,0 };
  clrscr();
  printf("Enter:");
  scanf("%d",&n);
  binary(n,a);
  getch();
}