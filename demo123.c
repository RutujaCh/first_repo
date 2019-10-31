#include<stdio.h>
int main()
{
  int a,b,c,big;

  a=20;b=10;c=3;
  big=(a>b)?(a>c?a:c):(b>c?b:c);
  return 0;
}
