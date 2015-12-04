  #include <stdio.h>

  main()
  {
    char str[80];
     int i, delt = 'a' - 'A';

    printf("Enter a string less than 80 characters:\n");
   gets( str );
    i = 0;
   while (str[i]){
     if ((str[i] >= 'A') && (str[i] <= 'Z'))
        str[i] += delt;  
   }
    printf("The entered string is (in lowercase):\n");
    puts( str );
    return 0;
}
