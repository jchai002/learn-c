  #include <stdio.h>

  int  x = 1234;
  double y = 1.234567;

  void function_1(int x , double y)
  {
     printf("From function_1\n  x=%d, y=%f\n", x, y);
  }

 main()
 {
    int x = 4321;   /* blockk scope */

    function_1(x, y);
    printf("Within the main block\n  x=%d, y=%f\n", x, y);
    /* a nested blockk */
    {
       double y = 7.6543;  /* blockk scope  */
       function_1(x, y);
       printf("Within the nested block\n  x=%d, y=%f\n", x, y);
    }
    return 0;
 }
