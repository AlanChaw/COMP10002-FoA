
#include <stdio.h>
#include <assert.h>

int main(){
    char c;

    FILE* fptr;
    fptr = fopen("./testFile.txt", "r");
    assert(fptr != NULL);

    while ((c=getc(fptr)) != EOF) {
        printf("%c", c);
    }

    fclose(fptr);
    return 0;
}
