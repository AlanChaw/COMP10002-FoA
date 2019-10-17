//
//  main.c


#include <stdio.h>
#include <assert.h>

#define MAXLEN 100

int main(){
    
    char word[MAXLEN];

    FILE* fptr;
    fptr = fopen("./testFile.txt", "r");
    assert(fptr != NULL);

    while (fscanf(fptr, "%s", word) != EOF) {
        printf("%s ", word);
    }

    fclose(fptr);
    
    return 0;
}

