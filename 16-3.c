#include <stdio.h>

void print_string(char *str){
    printf("%s\n", str );
}
int main()
{
  int i;
  char str[2][15] = { "You know what,", "C is powerful." };

  for (i=0;i<2;i++){
  print_string(str[i]);
}
  return 0;
}
