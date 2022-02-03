
#include "a.h"

int do_a(int *a, int *b)
{
  int c = *b;
  *b = *a;
  *a = c;
  return 1;
}

