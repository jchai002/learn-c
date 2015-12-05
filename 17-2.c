#include <stdio.h>
#include <stdlib.h>
/* function definition */

int main()
{
float *ptr;
ptr=calloc(100,sizeof(float));
printf("after calloc: pointer value is %p, right value is %f\n",ptr,*ptr );
realloc(ptr,50*sizeof(float));
printf("after realloc: pointer value is %p, right value is %f\n",ptr,*ptr );
}
