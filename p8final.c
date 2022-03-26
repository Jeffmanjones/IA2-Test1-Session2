#include <stdio.h>
typedef struct triangle
{
  float base,altitude,area;
}triangle;

int input_n()
{
  int n;
  printf("Enter number of triangles:\n");
  scanf("%d",&n);
  return n;
}

triangle input_triangle()
{
  triangle a;
  printf("Enter base and height of the triangle\n");
  scanf("%f%f",&a.base,&a.altitude);
  return a;
}

void input_n_triangles(int n, triangle t[n])
{
  for(int i=0;i<n;i++)
  {
    t[i]=input_triangle();
  }
}

void find_areas(triangle *t)
{
  t->area=0.5*(t->base)*(t->altitude);
}

void find_areas_n(int n,triangle t[n])
{
  for(int i=0;i<n;i++)
  {
    find_areas(t[i]);
  }
}

triangle find_smallest_triangle(int n,triangle t[n])
{
  triangle small=t[0];
  for(int i=0;i<n-1;i++)
  {
    if(t[i].area<small.area)
      small=t[i];
  }
  return t;
}

