#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{

  printf(1, "Writecount is at %d\n", writecount());

  int i;
  int new_writecount = 15;
  int negative_writecount = -5;

  for(i = 1; i < 8; i++)
    printf(1, "Writecount is at %d\n", writecount());

  setwritecount(new_writecount);

  printf(1, "Writecount is at %d\n", writecount());

  setwritecount(negative_writecount);

  printf(1, "Writecount is at %d\n", writecount());
  
  exit();
}
