//
//  main.c
//  assign1
//
//  Created by wenbin on 2019/9/11.
//  Copyright © 2019 wenbin. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100
#define MAX_WORDS 1000

int getword(char W[], int limit);

int main(int argc, const char * argv[]) {
    
    char words[MAX_WORDS][MAX_LENGTH];
    int i = 0;
    while (i < MAX_WORDS && getword(words[i], MAX_LENGTH) != EOF) {
        i++;
    }
    
    int j;
    for (j = 0; j < i; j++) {
        printf("%s\n", words[j]);
    }
    
    return 0;
}

int
getword(char W[], int limit) {
    int c, len=0;
    /* first, skip over any non alphabetics */
    while ((c=getchar())!=EOF && !isalpha(c)) {
        /* do nothing more */
    }
    if (c==EOF) {
        return EOF;
    }
    /* ok, first character of next word has been found */
    W[len++] = c;
    while (len<limit && (c=getchar())!=EOF && isalpha(c)) {
        /* another character to be stored */
        W[len++] = c;
    }
    /* now close off the string */
    W[len] = '\0';
    return 0;
}
