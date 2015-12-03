#include <stdio.h>
  int main()
  {
     char array_ch[11] = {'I', ' ',
                          'l', 'i', 'k', 'e',' ',
                          'C', '!','\n','\0'};
    int i;
    for (i=0; array_ch[i] != '\0'; i++)
       printf("%c", array_ch[i]);
    return 0;
 }
