#include <stdio.h>

void main()
{
  int j;
  char array_ch[5];
  char ch = 'a';
  for (j=0;j<5;j++){
    array_ch[j]=ch+j;
  }

  int i;

  for(i=0;i<5;i++) {
    printf("%c\n",array_ch[i]);
  };

}
