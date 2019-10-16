/* Exercise 7.12 in Programming, Problem Solving, and Abstraction
 
 Determine if a string is a palindrome
 
 Alistair Moffat, October 2013.
 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSTR 100

/* function prototypes */

int is_palindrome(char s[]);
int read_line(char str[], int max);

/* scaffolding to test the required function
 */
int
main(int argc, char *argv[]) {
    char str[MAXSTR];
    printf("Enter strings, one per line:\n");
    while (read_line(str, MAXSTR) == 1) {
        printf("The string \"%s\" is ", str);
        if (!is_palindrome(str)) {
            printf("**not** ");
        }
        printf("a palindrome\n");
    }
    return 0;
}

/* the function required -- tests string for palindromeness
 */
int
is_palindrome(char str[]) {
    int frst, last;
    frst = 0;
    last = strlen(str)-1;
    while (frst<last) {
        if (str[frst] != str[last]) {
            return 0;
        }
        frst += 1;
        last -= 1;
    }
    return 1;
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
