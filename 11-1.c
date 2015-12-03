#include <stdio.h>
void Print(char ch);
int main()
{
   char str = 'a';
   char *ptr;
   ptr=&str;
   Print(*ptr);
}

void Print(char ch) {
  printf("%c\n", ch);
}
