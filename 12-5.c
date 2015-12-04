#include <stdio.h>
  int main()
  {
    double list_data[6] = {
             1.12345,
             2.12345,
             3.12345,
             4.12345,
             5.12345};
    int size_sum,i;
    size_sum=0;
    
    for (i=0;i<6;i++){
      size_sum+= sizeof(list_data[i]);
    }

    printf("list data size is %d bytes\n", sizeof(list_data));
    printf("size_sum is %d bytes\n", size_sum);

    return 0;
 }
