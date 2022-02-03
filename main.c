#include "a.h"
#include <stdio.h>

int 
main(int argc, char *argv[])
{
  int a = 1;
  int b = 3;
  int retval = do_a(&a,&b);

  printf("Val was %d\n", retval );

  printf("Values are a=%d  b=%d\n", a, b );



}
