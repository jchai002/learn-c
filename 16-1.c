#include <stdio.h>

void print_string(char *str){
  printf("%s\n", str );
}
int main()
{
  char str[] = "I like C!";
  print_string(str);
  return 0;
}
