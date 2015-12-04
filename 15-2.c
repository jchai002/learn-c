#include <stdio.h>

int MultiTwo(int x,int y) {
  int product= x*y;
  return product;
}

int main()
{
  int x=3;
  int y=6;

  printf(" %d times %d is: %d\n",x,y,MultiTwo(x,y));
  return 0;
}
