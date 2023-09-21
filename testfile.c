#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  int i;

  for(i = 1; i < 2; i++)
    printf(1, "Writecount is at %d", writecount());
  exit();
}
