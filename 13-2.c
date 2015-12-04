#include <stdio.h>
#include <string.h>

  void main()
  {
    char str[]="This is Exercise 2.";

    int i,sum;
    sum=0;
    for (i=0;i<strlen(str);i++){
      sum+= (sizeof str[i]);
    }

    printf("sum size:%d\n",sum);
    printf("str size:%d\n",strlen(str));
 }
