#include <stdio.h>
int input_number()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}
int is_composite(int n)
{
  if(n==1 || n==2)
    return 1;
  for(int i=2;i<n;i++)
  {
    if((n%i)==0)
      return 1;
  }
  return 0;
}
void output(int n, int composite)
{
  if(composite==1)
    printf("%d is a composite number",n);
  else
    printf("%d is not a composite number",n);
}
int main()
{
  int n,c;
  n=input_number();
  c=is_composite(n);
  output(n,c);
  return 0;
}