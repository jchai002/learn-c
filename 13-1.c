#include <stdio.h>
#include <string.h>

  void main()
  {
    char str1[]="This is Exercise 1.";
    char str2[strlen(str1)];

    int i;
    for (i=0;i<strlen(str1)+1;i++){
      str2[i]=str1[i];
    }

    printf("%s\n",str2);
 }
