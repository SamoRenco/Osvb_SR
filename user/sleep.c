#include "kernel/sysproc.c"
#include "user/user.h"
#include "user/usys.S"

int
main(char *argv[]){
  int i = atoi(argv[0]);

  sleep(i);

  exit(0);
}
