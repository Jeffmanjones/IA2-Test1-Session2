#include <stdio.h>
int input()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}
int gcd(int a, int b)
{
  int hcf;
  int large=(a>b)?(a):(b);
  for(int i=1;i<large;i++)
  {
    if(a%i==0 && b%i==0)
      hcf=i;
  }
  return hcf;
}
void output(int a,int b, int gcd)
{
  printf("GCD(HCF) of %d and %d is %d",a,b,gcd);
}
int main()
{
  int a,b,hcf;
  a=input();
  b=input();
  hcf=gcd(a,b);
  output(a,b,hcf);
  return 0;
}