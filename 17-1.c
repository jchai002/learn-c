#include <stdio.h>
#include <stdlib.h>
/* function definition */
int sum(int max)
{
  int i,sum;
  for (i=1; i<=max; i++) {
    sum+=i;
  }
  return sum;
}

int main()
{
int bytes,max,*ptr;
puts("enter bytes:");
scanf("%d", &bytes);

max=bytes/sizeof(int);

printf("%d bytes lead to sum of %d:\n", bytes, sum(max) );
return 0;

}
