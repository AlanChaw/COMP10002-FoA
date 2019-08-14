
#include <stdio.h>
#include <stdlib.h>


int
main(int argc, char *argv[]) {
    int i;
    for (i = 1; i < 2000000; i = 2*i){
        printf("%7d\n", i);
    }
    
    return 0;
}
