#include <stdio.h>

int main()
{
  int x=512;
  int y=1024;
  int z=2048;

  printf("x: left value:%p, right value:%d\n",&x,x );
  printf("y: left value:%p, right value:%d\n",&y,y );
  printf("z: left value:%p, right value:%d\n",&z,z );

  return 0;
}
