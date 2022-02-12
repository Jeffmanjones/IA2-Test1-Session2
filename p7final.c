#include <stdio.h>

typedef struct triangle
{
  float base,height,area;
}triangle;
triangle input_triangle()
{
  triangle a;
  printf("Enter the base and height for a triangle\n");
  scanf("%f%f",&a.base,&a.height);
  return a;
}
triangle find_area(triangle t)
{
  t.area=0.5*(t.base)*(t.height);
  return t;
}
void output(triangle t)
{
  printf("The area of triangle with base=%f and altitude=%f is %f",t.base,t.height,t.area);
}
int main()
{
  triangle a;
  a=input_triangle();
  a=find_area(a);
  output(a);
  return 0;
}