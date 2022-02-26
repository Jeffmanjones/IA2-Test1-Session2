#include <stdio.h>
void input_string(char a[20])
{
  printf("Enter a string\n");
  scanf("%s",a);
}
int str_reverse(char a[20])
{
  int count=0;
  while(a[count]!='\0')
    count++;
  return count;
}
void output(char a[20],char reversea[20])
{
  printf("the reverse of %s is %s",a,reversea);
}
int main()
{
  char a[20];
  input_string(a);
  int size=str_reverse(a);
  char reversea[size];
  int j=size-1;
  for(int i=0;i<size;i++)
  {
    reversea[i]=a[j];
    j--;
  }
  output(a,reversea);
  return 0;
}