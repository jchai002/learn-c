#include <stdio.h>

int main()
{
  char ch,*ptr;

  ch='A';
  printf("ch: left value:%p, right value:%d or %c\n",&ch,ch,ch );

  ptr=&ch;
  *ptr=66;
  printf("ptr: left value:%p, right value:%d or %c\n",&ptr,*ptr,*ptr );
  printf("ch: left value:%p, right value:%d or %c\n",&ch,ch,ch );

  return 0;
}
