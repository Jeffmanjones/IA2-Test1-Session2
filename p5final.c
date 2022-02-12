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
  if(b>a)
  {
    int temp=a;
    a=b;
    b=temp;
  }
  int rem=a%b;
  while(rem==0)
  {
    int temp=b;
    b=rem;
    rem=temp%rem;
  }
  return rem;
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