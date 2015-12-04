#include <stdio.h>

void print_string(char *str){
  printf("%s\n", str );
}
int main()
{
  char str[] = "I like C!";
  char *ptr= str;
  *(ptr+3)='o';
  *(ptr+4)='v';
  print_string(str);
  return 0;
}
