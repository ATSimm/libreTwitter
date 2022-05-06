#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long hash(){

  time_t t = time(NULL); //get num of seconds since Jan 1 1970
  return t; //return value
}
