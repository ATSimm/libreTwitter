#include <stdio.h>
#include <stdlib.h>
#include "linkedList.c"
//#include "userManage.c"

int main(){
  system("clear");
  
  char content[280];
  for(int i = 0; i < 3; i++){
    gets(content);
    insert(i,content);
    printf("\n");
  }
  traverse();
}
