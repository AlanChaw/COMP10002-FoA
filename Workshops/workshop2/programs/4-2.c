
#include <stdio.h>
#include <stdlib.h>


int
main(int argc, char *argv[]) {
    
    int i = 0;
    do{
        printf("i = %d\n", i);
        i++;
    }while(i < 10);
    
    printf("\n\n");
    
    int j = 0;
    printf("j = %d\n", j);
    j++;
    while (j < 10) {
        printf("j = %d\n", j);
        j++;
    }
    
}
