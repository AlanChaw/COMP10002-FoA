
#include <stdio.h>
#include <stdlib.h>


int
main(int argc, char *argv[]) {
    int i, j;
    j = 5;
    for (i = 0; i < j; i++) ; {
        printf("i = %d, j = %d\n", i, j);
    }

    return 0;
}
