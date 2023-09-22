#include "kernel/sysproc.c"
#include "user/user.h"
#include "user/usys.S"


int
main(int argc){
  int i = atoi(argc);

  sleep(i);

exit(0);
}
