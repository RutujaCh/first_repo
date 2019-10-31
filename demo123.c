#include<stdio.h>
int main()
{
  int a,b,c,big;
printf("enter three numbers");
scanf("%d %d %d",&a,&b,&c);
//a=20;b=10;c=3;
//big=(a>b)?(a>c?a:c):(b>c?b:c);
//using conditional statement
if(a>b)
{
  if(a>c)
    big=a;
  else
    big=c;
}
else if (b>c)
  big=b;
else 
  big=c; 
printf("biggest num is %d",big);
  return 0;
}

