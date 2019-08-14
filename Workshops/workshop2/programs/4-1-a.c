
#include <stdio.h>
#include <stdlib.h>


int
main(int argc, char *argv[]) {
    for (int i = 0; i < 20; i = i + 3){
        printf("%2d\n", i);
    }
    
    return 0;
}
