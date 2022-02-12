#include <stdio.h>
int input_side()
{
  int a;
  printf("Enter edge length of a triangle\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a, int b, int c)
{
  if(a!=b && a!=c && b!=c)
    return 1;
  else 
    return 0;
}
void output(int a, int b, int c, int isscalene)
{
  if(isscalene==1)
    printf("The triangle is scalene\n");
  else
    printf("the triangle is not scalene\n");
}
int main()
{
  int a,b,c,scalene;
  a=input_side();
  b=input_side();
  c=input_side();
  scalene=check_scalene(a,b,c);
  output(a,b,c,scalene);
  return 0;
}