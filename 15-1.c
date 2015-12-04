/* 15L02
Functions with no arguments */
#include <stdio.h>
#include <time.h>
void GetDateTime(void);
main()
{
  printf("Before the GetDateTime() function is called.\n");
  GetDateTime();
  printf("After the GetDateTime() function is called.\n");
  return 0;
}
/* GetDateTime() definition */
void GetDateTime(void)
{
  time_t now;

  printf("Within GetDateTime().\n");
  time(&now);
  printf("Current date and time  %s\n", asctime(localtime(&now)));
}
