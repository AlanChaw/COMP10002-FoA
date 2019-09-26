//
//  string_copy_and_free.c
//
//  Created by Wenbin on 2019/9/26.
//  Copyright © 2019 wenbin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *string_dupe(char *s);
char **string_set_dupe(char **S);
void string_set_free(char **S);

int main(int argc, char *argv[]){
    char** argv_dupe = string_set_dupe(argv);
    int count = 0;
    while (*(argv_dupe+count)) {        /* abbr for:  while(*(argv_dupe+count) != NULL) */
        printf("%s\n", *(argv_dupe+count));
        count++;
    }
    
    string_set_free(argv_dupe);
    argv_dupe = NULL;
    return 0;
}

char *string_dupe(char *s){
    char *dupe = (char *)malloc(strlen(s)+1);  /* add the space for last NULL byte */
    strcpy(dupe, s);
    return dupe;
}

char **string_set_dupe(char **S){
    /* scan pointer S, get its size */
    int count = 0;
    while (*(S+count)) {
        count++;
    }
    char** dupe = (char **)malloc((count+1) * sizeof(*S));  /* add the last NULL pointer */
    assert(dupe);
    int i;
    for (i = 0; i < count; i++) {
        dupe[i] = string_dupe(*(S+i));
    }
    dupe[count] = NULL;
    return dupe;
}

void string_set_free(char **S){
    /* S is a pointer to pointers, it has to be freed from inside to outside */
    int count = 0;
    while (*(S+count)) {
        free(*(S+count));
        count++;
    }
    free(S);
}
