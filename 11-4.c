#include <stdio.h>

int main()
{
  int x,y,*ptr_x,*ptr_y;

  ptr_x=&x;
  ptr_y=&y;

  *ptr_x=5;
  *ptr_y=6;
  printf("x is %d, y is %d\n",*ptr_x,*ptr_y);

  *ptr_x=*ptr_x * *ptr_y;
  printf("x is %d, y is %d\n",*ptr_x,*ptr_y);

  return 0;
}
