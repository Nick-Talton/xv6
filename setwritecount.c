#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv)
{

    if(argc != 2){
        printf(2, "usage: set writecount <value>\n");
        exit();
    }

    int value = atoi(argv[1]);
    
    setwritecount(value);

    exit();
}
