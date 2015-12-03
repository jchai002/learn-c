#include <stdio.h>

void main()
{
  int i,j;
  char list_ch[][2] = {
         '1', 'a',
         '2', 'b',
         '3', 'c',
         '4', 'd',
         '5', 'e',
         '6', 'f'};

 printf("The size of list_ch[][2] is %d bytes.\n", sizeof (list_ch));
 for (i=0;i<6;i++){
   for (j=0;j<2;j++){
      printf("array number %d, element number %d is %c\n",i+1,j+1,list_ch[i][j]);
   }
 }

}
