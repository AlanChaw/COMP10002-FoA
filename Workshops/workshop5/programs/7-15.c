/* Exercise 7.15 in Programming, Problem Solving, and Abstraction
 
 Determine if two strings are anagrams
 
 Alistair Moffat, October 2013.
 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSTR 100

/* function prototypes */

int is_anagram(char s1[], char s2[]);
int read_line(char str[], int max);

/* scaffolding to test the required function
 */
int
main(int argc, char *argv[]) {
    char s1[MAXSTR], s2[MAXSTR];
    printf("Enter two strings, one string per line:\n");
    while ((read_line(s1, MAXSTR)==1) &&
           (read_line(s2, MAXSTR)==1)) {
        printf("The strings \"%s\" and \"%s\" are ", s1, s2);
        if (!is_anagram(s1, s2)) {
            printf("**not** ");
        }
        printf("anagrams\n");
    }
    return 0;
}

/* the function required -- tests strings for anagramness
 */
#define CHAR_MAX 256

int
is_anagram(char s1[], char s2[]) {
    int i;
    int freqs[CHAR_MAX]={0};
    for (i=0; s1[i]!='\0'; i++) {
        /* count char frequencies in s1 */
        freqs[(int)s1[i]]++;
    }
    for (i=0; s2[i]!='\0'; i++) {
        /* and decrement for s2 */
        freqs[(int)s2[i]]--;
    }
    /* if same characters in strings, freqs should be all
     zeros again */
    for (i=0; i<CHAR_MAX; i++) {
        if (freqs[i]) {
            /* least one letter didn't get balanced */
            return 0;
        }
    }
    /* if get here, then all of freqs is back to zero, so... */
    return 1;
    
    /* Another way of tacking the same problem: copy the two
     string to two temporary arrays, and then sort the characters in
     each array.  When sorted, the two strings should be identical
     if the original strings were anagrams */
    
}


/* read one line of input into a string */
int
read_line(char str[], int max) {
    int n=0, c;
    while ((c=getchar()) != EOF && c!='\n') {
        str[n++] = c;
        if (n==max-1) {
            str[n++] = '\0';
            return 1;
        }
    }
    if (c==EOF && n==0) {
        return 0;
    }
    str[n++] = '\0';
    return 1;
}
