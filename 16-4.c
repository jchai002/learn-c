
#include <stdio.h>
/* function definition */
void StrPrint(char **str)
{
  int i;
  for (i=0; i<7; i++) {
  printf("%s\n", str[i]);
  }
}

main()
{
char *str[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
};
StrPrint(str);
return 0;
}
