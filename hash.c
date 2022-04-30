#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long hash(){
  time_t t = time(NULL);
  printf("%ld",t);
  srand(time(0));
  long k = rand() % 860000;
  return t * k;
}
