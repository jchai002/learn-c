#include <stdio.h>

int main()
{
  float flt,*ptr;

  flt=123.45;
  printf("flt: left value:%p, right value:%f\n",&flt,flt );

  ptr=&flt;
  *ptr=543.21;
  printf("ptr: left value:%p, right value:%f\n",&ptr,*ptr );
  printf("flt: left value:%p, right value:%f\n",&flt,flt );

  return 0;
}
