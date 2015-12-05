#include <stdio.h>
#include <stdlib.h>
/* function definition */

int main()
{
int n;
puts("enter a number:");
scanf("%d",&n);
float *ptr1,*ptr2;
ptr1=malloc(n*sizeof(float));
printf("after malloc: pointer value is %p, right value is %f\n",ptr1,*ptr1 );
ptr2=calloc(n,sizeof(float));
printf("after calloc: pointer value is %p, right value is %f\n",ptr2,*ptr2 );
}
