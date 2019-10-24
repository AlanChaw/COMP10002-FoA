//
//  main.c


#include <stdio.h>
#include <assert.h>

int main(){
    
    FILE* fptr;
    fptr = fopen("./testFile.txt", "w");
    assert(fptr != NULL);

    fprintf(fptr, "hello world\n");

    fclose(fptr);
    
    return 0;
}

