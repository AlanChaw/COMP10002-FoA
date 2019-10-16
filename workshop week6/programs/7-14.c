/* Exercise 7.14 in Programming, Problem Solving, and Abstraction
 
 Read a string, then convert to an integer
 
 Alistair Moffat, October 2013.
 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXSTR 100

/* function prototypes */

int my_atoi(char str[]);
int read_line(char str[], int max);

/* scaffolding to test the required function
 */
int
main(int argc, char *argv[]) {
    char str[MAXSTR];
    int n;
    printf("Enter an integer, then return: ");
    while (read_line(str, MAXSTR)==1) {
        printf("The string \"%s\"", str);
        n = my_atoi(str);
        printf(" corresponds to integer %d\n", n);
    }
    return 0;
}

/* the function required -- convert a string to an integer
 */

#define CH_ZERO '0'
#define CH_PLUS '+'
#define CH_NEGA '-'
#define RADIX   10

int
my_atoi(char str[]) {
    int n=0, i=0;
    int posneg=1;
    /* skip leading blanks and tabs */
    while (isspace(str[i])) {
        i++;
    }
    /* look for a sign */
    if (str[i]==CH_PLUS) {
        /* do nothing */
        i++;
    } else if (str[i]==CH_NEGA) {
        posneg = -1;
        i++;
    }
    /* process the digits one by one */
    while (str[i] && isdigit(str[i])) {
        n = RADIX*n + (str[i] - CH_ZERO);
        i++;
    }
    /* stop taking digits at end of string, or at any non-digit
     character */
    return posneg*n;
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
