#include <stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the size of array\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  printf("Enter %d numbers\n",n);
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
}
int sum_composite_numbers(int n, int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    for(int j=2;j<a[i];j++)
    {
      if((a[i]%j)==0)
      {
        sum+=a[i];
        break;
      }
    }
  }
  return sum;
}
void out_put(int sum)
{
  printf("%d",sum);
}
int main()
{
  int n=input_array_size();
  int a[n];
  input_array(n,a);
  int sum=sum_composite_numbers(n,a);
  out_put(sum);
  return 0;
}