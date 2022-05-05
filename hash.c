#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long hash(){
  time_t t = time(NULL);
  return t;
}
